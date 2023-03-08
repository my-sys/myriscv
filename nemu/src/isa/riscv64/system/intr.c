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
#ifndef CONFIG_TARGET_SHARE
  // mstatus
  if(csr(0x300) & 0x8){
	csr(0x300) = (csr(0x300) &0xffffffffffffff77)|0x1880;
  }else{
	csr(0x300) = (csr(0x300) &0xffffffffffffff77)|0x1800;
  }
  //csr(0x300) = (csr(0x300) &0xffffffffffffff77) | (Mux(reg_mstatus(3),"h1880".U(64.W),"h1800".U(64.W)))
#else 
  // mstatus
  if(csr(0x300) & 0x8){
	csr(0x300) = (csr(0x300) &0xffffffffffffff77)|0x80;
  }else{
	csr(0x300) = (csr(0x300) &0xffffffffffffff77);
  }
#endif
  // mtvec
  word_t address = csr(0x305);
  return address;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
