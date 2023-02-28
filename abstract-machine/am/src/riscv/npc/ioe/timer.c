#include <am.h>
#include <riscv/riscv.h>
void __am_timer_init() {
}
#define RTC_ADDR 0x10005000
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //uptime->us = 0;
  uint64_t temp = ind(RTC_ADDR);
  *uptime = (AM_TIMER_UPTIME_T){.us = temp};
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
