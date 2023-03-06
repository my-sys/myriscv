#include "difftest.h"
#include <dlfcn.h>
#include "debug.h"
#include "ram.h"
#include "emulator.h"
#define CONFIG_MBASE 0x80000000

#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)
#define DIFFTEST_TO_REF 1
#define DIFFTEST_TO_DUT 0

static uint64_t ref_this_pc = RESET_VECTOR;

static CPU_state temp_cpu = {};

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(void *dut, bool direction) = NULL;

static bool is_skip_ref = false;
static bool is_need_sync = false;
static int skip_dut_nr_inst = 0;

void difftest_skip_ref() {
	is_skip_ref = true;
	skip_dut_nr_inst = 0;

}

void difftest_skip_dut(int nr_ref, int nr_dut){
	skip_dut_nr_inst += nr_dut;

	while(nr_ref -- > 0){
		ref_difftest_exec(1);
	}
}

void init_difftest(char *ref_so_file, long img_size, int port){
	assert(ref_so_file != NULL);

	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY | RTLD_DEEPBIND);
	assert(handle);

  	ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  	assert(ref_difftest_memcpy);

  	ref_difftest_regcpy = (void (*)(void *dut, bool directio))dlsym(handle, "difftest_regcpy");
  	assert(ref_difftest_regcpy);

  	ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
  	assert(ref_difftest_exec);

  	ref_difftest_raise_intr = (void (*)(void *dut, bool direction))dlsym(handle, "difftest_raise_intr");
  	assert(ref_difftest_raise_intr);

  	void (*ref_difftest_init)(int) =(void (*)(int)) dlsym(handle, "difftest_init");
  	assert(ref_difftest_init);

    Log("Differential testing: %s", ASNI_FMT("ON", ASNI_FG_GREEN));
    Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

	ref_difftest_init(port);
  	ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
	cpu.pc = RESET_VECTOR;
	cpu.gpr[0] = 0;
  	ref_difftest_regcpy(&cpu,DIFFTEST_TO_REF);
}

void difftest_step(vaddr_t pc,bool is_irq){
	CPU_state ref_r;

	// if(skip_dut_nr_inst > 0){
	// 	ref_difftest_regcpy(&ref_r,DIFFTEST_TO_DUT);
	// 	// 这里有问题，ref.pc 是下一个pc, 而pc 是当前pc, 跳转指令问题  
	// 	if(ref_r.pc == pc){
	// 		skip_dut_nr_inst = 0;
	// 		Emulator::get_instance().checkregs(&ref_r, pc);
	// 		return;
	// 	}
	// 	skip_dut_nr_inst --;
	// 	if (skip_dut_nr_inst == 0){
	// 		Log("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
	// 	}
	// 	return;
	// }

	// if (is_skip_ref){
	// 	// to skip the checking of an instruction, just copy the reg state to reference design
	// 	// 这里有问题，ref.pc 是下一个pc, 而pc 是当前pc, 跳转指令问题  
	// 	ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
	// 	is_skip_ref = false;
	// 	return;
	// }
	if(is_skip_ref){
		for(int i = 0; i<32;i++){
			temp_cpu.gpr[i] = cpu.gpr[i];
			temp_cpu.csr[i] = cpu.csr[i];
		}
		is_skip_ref = false;
		is_need_sync = true;
		return;
	}
	if(is_need_sync){
		temp_cpu.pc = cpu.pc;
		ref_difftest_regcpy(&temp_cpu, DIFFTEST_TO_REF);
		is_need_sync = false;
	}

	ref_difftest_exec(1);
	ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
//  原因 流水线中难以获取下一个pc值，只能获取当前pc值，而ref是获取的下一个pc值，这就存在差异，需要进行转换  
	Emulator::get_instance().checkregs(&ref_r, pc);
	if(is_irq){
		ref_difftest_raise_intr(&cpu,DIFFTEST_TO_REF);
	}
}