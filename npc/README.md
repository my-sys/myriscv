Chisel Project Template
=======================

Another version of the [Chisel template](https://github.com/ucb-bar/chisel-template) supporting mill.
mill is another Scala/Java build tool without obscure DSL like SBT. It is much faster than SBT.

Contents at a glance:

* `.gitignore` - helps Git ignore junk like generated files, build products, and temporary files.
* `build.sc` - instructs mill to build the Chisel project
* `Makefile` - rules to call mill
* `playground/src/GCD.scala` - GCD source file
* `playground/src/DecoupledGCD.scala` - another GCD source file
* `playground/src/Elaborate.scala` - wrapper file to call chisel command with the GCD module
* `playground/test/src/GCDSpec.scala` - GCD tester

Feel free to rename or delete files under `playground/` or use them as a reference/template.

## Getting Started

First, install mill by referring to the documentation [here](https://com-lihaoyi.github.io/mill).

To run all tests in this design (recommended for test-driven development):
```bash
make test
```

To generate Verilog:
```bash
make verilog
```

## Change FIRRTL Compiler

You can change the FIRRTL compiler between SFC (Scala-based FIRRTL compiler) and
MFC (MLIR-based FIRRTL compiler) by modifying the `useMFC` variable in `playground/src/Elaborate.scala`.
The latter one requires `firtool`, which is included under `utils/`.



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