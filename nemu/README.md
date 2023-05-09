# NEMU

NEMU(NJU Emulator) is a simple but complete full-system emulator designed for teaching purpose.
Currently it supports x86, mips32, riscv32 and riscv64.
To build programs run above NEMU, refer to the [AM project](https://github.com/NJU-ProjectN/abstract-machine).

The main features of NEMU include
* a small monitor with a simple debugger
  * single step
  * register/memory examination
  * expression evaluation without the support of symbols
  * watch point
  * differential testing with reference design (e.g. QEMU)
  * snapshot
* CPU core with support of most common used instructions
  * x86
    * real mode is not supported
    * x87 floating point instructions are not supported
  * mips32
    * CP1 floating point instructions are not supported
  * riscv32
    * only RV32IM
  * riscv64
    * only RV64IM
* memory
* paging
  * TLB is optional (but necessary for mips32)
  * protection is not supported
* interrupt and exception
  * protection is not supported
* 5 devices
  * serial, timer, keyboard, VGA, audio
  * most of them are simplified and unprogrammable
* 2 types of I/O
  * port-mapped I/O and memory-mapped I/O


//------------------------------NEMU-----------------------
---------回顾了一下，nemu的代码写得比较糟糕，不过能用就行了，不改了。
判断nemu有关指令设计的正确性，可以通过与spkie进行difftest对比查找错误。
对于mret指令，关于mstatus 的mpie位的处理。目前spkie模拟器 与riscv官方文档、c906、蜂鸟书籍的处理有些许不同。
正则表达式库，我使用的是pcre,非regex

nemu 中，主要是对isa/riscv64/inst.c 文件，cpu/difftest/ref.c 文件，monitor/sdb/expr.c ,monitor/sdb/sdb.c 文件进行了修改。
nemu 中不少#ifdef CONFIG_FTRACE 这类的情况，难以找到定义，原因这是通过menuconfig 配置
配置文件的内容，可能不在VSCode的搜索范围。也许通过 find ./ -name *.* | xargs grep "???" 可以找到
nemu 执行逻辑，exec_once() -> isa_exec_once -> inst_fetch(获取指令) ->decode_exec(解析并执行)

make -nB 让make程序以“只输出命令但不执行”的方式强制构建目标。
make count 自动运行统计代码行数的命令


.incbin "build/ramdisk.img"
//关于仙剑，攻击敌人不显示数字，原因为速度过慢的原因，调整 battle.h 文件 #define       BATTLE_FPS               25

  a[0] = c->GPR1; //a7 
  a[1] = c->GPR2; //a0 
  a[2] = c->GPR3; //a1 
  a[3] = c->GPR4; //a2 

如果开启difftest情况下出错，而且不是比较值不同出错，则可能需要gdb了,这种情况应用程序出错的可能性大，
并且可能是内存溢出了。当然还有一种错误是不会产生程序崩溃，只是某些数据计算出错，这种错误将极其耗时，
只能通过预期效果推测出错位置。