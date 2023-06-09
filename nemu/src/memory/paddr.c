#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>
#include "../monitor/xingk_fun.h" 
#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR ") at pc = " FMT_WORD,
      addr, CONFIG_MBASE, CONFIG_MBASE + CONFIG_MSIZE, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);
}

word_t paddr_read(paddr_t addr, int len) {
//  char temp_buf[500]={};
 // char *p = temp_buf; 
#ifdef CONFIG_MTRACE
  fprintf(mtrace_log_fp,"== memory read 0x%x\n",addr);
#endif 
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
#ifdef CONFIG_MTRACE  
  fprintf(mtrace_log_fp,"** device read 0x%x\n",addr);
#endif 
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
#ifdef CONFIG_MTRACE  
  fprintf(mtrace_log_fp, "      !!!!!!!  read out_of_bound 0x%x\n",addr);
#endif 
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
#ifdef CONFIG_MTRACE
  fprintf(mtrace_log_fp,"== memory write 0x%x\n",addr);
#endif 
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
#ifdef CONFIG_MTRACE  
  fprintf(mtrace_log_fp,"** device write 0x%x\n",addr);
#endif 
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
#ifdef CONFIG_MTRACE  
  fprintf(mtrace_log_fp, "      !!!!!!! write out_of_bound 0x%x\n",addr);
#endif 
  out_of_bound(addr);
}
