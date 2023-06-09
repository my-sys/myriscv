BUILD_DIR = ./build
TOPNAME = riscv_soc
export PATH := $(PATH):$(abspath ./utils)

#CHOSE_LANGUAGE = "chisel"
CHOSE_LANGUAGE = "verilog"

# project source
ifeq ("verilog",$(CHOSE_LANGUAGE))
VSRCS = $(shell find $(abspath ./verilog/test/vsrc) -name "*.v") $(shell find $(abspath ./verilog/src) -name "*.v")
CSRCS = $(shell find $(abspath ./verilog/test/csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp") $(shell find $(abspath ./verilog/test/csrc/device) -name "*.c")
INCLUDE_DIR = $(abspath ./verilog/test/include)
else
VSRCS = $(shell find $(abspath ./playground/test/vsrc) -name "*.v") $(shell find $(abspath ./build) -name "*.v")
CSRCS = $(shell find $(abspath ./playground/test/csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp") $(shell find $(abspath ./playground/test/csrc/device) -name "*.c")
INCLUDE_DIR = $(abspath ./playground/test/include)
endif
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD 
# Optimize
VERILATOR_FLAGS += --x-assign fast -O3
#VERILATOR_FLAGS += -O3 --x-assign fast --x-initial fast --noassert
# Warn abount lint issues; may not want this on less solid designs
#VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace


#-------------------------------------------
# Check SystemVerilog assertions
#VERILATOR_FLAGS += --assert
# Generate coverage analysis
#VERILATOR_FLAGS += --coverage 
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt
#-------------------------------------------
#VERILATOR_FLAGS += --gdb
#VERILATOR_FLAGS += +define+SYNTHESIS

#VERILATOR_FLAGS += coverage_on  -file "verilator_config.vlt"
BIN = ./obj_dir/V$(TOPNAME)
#CFLAGS = -O3 -Wall -I$(INCLUDE_DIR) 
CFLAGS = -O3 -I$(INCLUDE_DIR) 
LDFLAGS = -lpthread -lSDL2 -ldl -lpcre -lreadline

CFLAGS += $(shell llvm-config --cxxflags) -fPIE 
LDFLAGS += $(shell llvm-config --libs)

DIFF_REF_SO = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so
ARGS_DIFF = --diff=$(DIFF_REF_SO)
IMG ?= 


verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill playground.runMain Zhoutao_top -td $(BUILD_DIR)
#mill -i __.test.runMain Zhoutao_top -td $(BUILD_DIR)

	@echo "generate verilog success!"


#$(BIN): $(VSRCS) $(CSRCS) 
#	make verilog
#	verilator $(VERILATOR_FLAGS) -top $(TOPNAME) verilator_config.vlt $^  -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LDFLAGS)" -I$(abspath $(BUILD_DIR))

clean:
	-rm -rf $(BUILD_DIR)
	-rm -rf obj_dir
	-rm *.vcd

#.PHONY: test verilog help compile bsp reformat checkformat clean

.PHONY: verilog clean sim run 

compile:$(VSRCS) $(CSRCS) 
	@echo "------------VERILATE--------------"
#	verilator $(VERILATOR_FLAGS) -top $(TOPNAME) verilator_config.vlt $^  -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LDFLAGS)" -I$(abspath $(BUILD_DIR))
	verilator $(VERILATOR_FLAGS) -top $(TOPNAME) $^  -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LDFLAGS)" -I$(abspath $(BUILD_DIR))
	@echo "--- BUILD ---------"
	make -j3 -C obj_dir -f V$(TOPNAME).mk 
#	obj_dir/V$(TOPNAME) +trace

compile1:$(VSRCS) $(CSRCS) 
	@echo "------------VERILATE--------------"
#	verilator $(VERILATOR_FLAGS) --gdb -top $(TOPNAME) verilator_config.vlt $^  -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LDFLAGS)" -I$(abspath $(BUILD_DIR))
	verilator $(VERILATOR_FLAGS) --gdb -top $(TOPNAME) $^  -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LDFLAGS)" -I$(abspath $(BUILD_DIR))
	@echo "--- BUILD ---------"
	make -j3 -C obj_dir -f V$(TOPNAME).mk 

ifneq ("verilog",$(CHOSE_LANGUAGE))
run:
	make verilog
	make compile
	$(call git_commit, "sim RTL xingk")
	obj_dir/V$(TOPNAME)  $(ARGS_DIFF) $(IMG)
else 
run:
	make compile
	$(call git_commit, "sim RTL xingk")
	obj_dir/V$(TOPNAME)  $(ARGS_DIFF) $(IMG)
endif

gdb:
	make verilog 
	make compile1
	$(call git_commit, "sim RTL xingk")
	obj_dir/V$(TOPNAME) $(ARGS_DIFF) $(IMG)	
# nemu/native.mk
sim: run
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."

include ../Makefile

#gtkwave waveform.vcd
#test:
#	mill -i __.test
#help:
#	mill -i __.test.runMain Elaborate --help

#compile:$(BIN) 
#	mill -i __.compile

#bsp:
#	mill -i mill.bsp.BSP/install

#reformat:
#	mill -i __.reformat

#checkformat:
#	mill -i __.checkFormat