#include <isa.h>
#include <memory/vaddr.h>
#include <memory/paddr.h>

// int isa_mmu_check(vaddr_t vaddr, int len, int type){
//   uintptr_t base = csr(0x180);

//   return 1;
// }

paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type) {
  return MEM_RET_FAIL;
}
