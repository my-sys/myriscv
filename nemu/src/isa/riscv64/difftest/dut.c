#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t npc,vaddr_t pc) {
    if(ref_r->pc != npc ){
        printf("ref->next_pc 0x%lx, nemu->next_pc :0x%lx,nemu this pc :0x%lx \n",ref_r->pc,npc,pc);
        return false;
    }
    for(int i=0;i<32;i++){
        if(ref_r->gpr[i] != gpr(i)){
            printf("ref gpr[%d]=%lx,nemu gpr[%d]=%lx\n",i,ref_r->gpr[i],i,gpr(i));
            printf("difftest false \n");
            return false;
        }
    }
    return true;
}

void isa_difftest_attach() {
}
