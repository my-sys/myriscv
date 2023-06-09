#include <am.h>
#include <riscv/riscv.h>
#define KEYDOWN_MASK 0x8000

//keyboard 0x1000_3000 ~ 0x1000_3FFF
#define KEYBOARD_ADDR 0x10003000
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd){
	uint32_t temp = inl(KEYBOARD_ADDR);
	if((temp & 0x8000) != 0){
		kbd->keydown = 1;
		kbd->keycode = temp & 0x7fff;
	}else{
		kbd->keydown = 0;
		kbd->keycode = temp;
	}
}