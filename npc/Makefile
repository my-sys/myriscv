BUILD_DIR = ./build
TOPNAME = Zhoutao_top
export PATH := $(PATH):$(abspath ./utils)


# project source
VSRCS = $(shell find $(abspath ./playground/test/vsrc) -name "*.v") $(shell find $(abspath ./build) -name "*.v")
CSRCS = $(shell find $(abspath ./playground/test/csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
INCLUDE_DIR = $(abspath ./playground/test/include)
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD 
# Optimize
VERILATOR_FLAGS += --x-assign unique -O3
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
# Generate coverage analysis
VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt

BIN = $(BUILD_DIR)/$(TOPNAME)
CFLAGS = -O3 -std=c++11 -static -g -Wall -I$(INCLUDE_DIR) 
LDFLAGS = -lpthread -lSDL2 -ldl
$(BIN): verilog $(VSRCS) $(CSRCS) 
	verilator $(VERILATOR_FLAGS) -top $(TOPNAME) $^ \
	-CFLAGS $(CFLAGS) -LDFLAGS $(LDFLAGS) -I$(BUILD_DIR)

test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill chiselModule.runMain $(Zhoutao_top) -td $(BUILD_DIR)

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean

sim:$(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."

include ../Makefile

#gtkwave waveform.vcd
