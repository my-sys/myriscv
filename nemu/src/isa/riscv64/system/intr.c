#include <isa.h>
#include "../local-include/reg.h"
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  // mpec
  csr(0x341) = epc;
  // mcause
  csr(0x342) = NO;
  // mtvec
  word_t address = csr(0x305);
  return address;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
