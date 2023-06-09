#ifndef __CPU_IFETCH_H__

#include <memory/vaddr.h>

extern int xingk_inst_num;
static inline uint32_t inst_fetch(vaddr_t *pc, int len) {
  uint32_t inst = vaddr_ifetch(*pc, len);
  (*pc) += len;
  xingk_inst_num++; 
  return inst;
}

static inline int get_run_inst_num(){
    return xingk_inst_num;
}
#endif
