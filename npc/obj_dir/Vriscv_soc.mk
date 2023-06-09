# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vriscv_soc.mk

default: Vriscv_soc

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/xingk/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vriscv_soc
# Module prefix (from --prefix)
VM_MODPREFIX = Vriscv_soc
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-O3 -I/home/xingk/ysyx-workbench/npc/verilog/test/include  -I/usr/lib/llvm-12/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -fPIE  \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lpthread -lSDL2 -ldl -lpcre -lreadline -lLLVM-12 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	audio \
	device \
	keyboard \
	rtc \
	serial \
	vga \
	difftest \
	disasm \
	emulator \
	expr \
	main \
	ram \
	sdb \
	watchpoint \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/xingk/ysyx-workbench/npc/verilog/test/csrc \
	/home/xingk/ysyx-workbench/npc/verilog/test/csrc/device \


### Default rules...
# Include list of all generated classes
include Vriscv_soc_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

audio.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/device/audio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/device/device.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/device/keyboard.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
rtc.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/device/rtc.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/device/serial.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/device/vga.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
emulator.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/emulator.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ram.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/ram.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/xingk/ysyx-workbench/npc/verilog/test/csrc/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vriscv_soc: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
