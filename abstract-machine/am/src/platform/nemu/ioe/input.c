#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

//这个获取按键的写法主要受nemu的影响,总共16位,最高位区分按下与释放,其他位数表示按键码
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

  uint32_t temp = inl(KBD_ADDR);
  if((temp & 0x8000) !=0){
    kbd->keydown = 1;
    kbd->keycode = temp&0x7fff;
  }else{
    kbd->keydown = 0;
    kbd->keycode = temp;    
  }
  // kbd->keydown = 0;
  // kbd->keycode = AM_KEY_NONE;
}
