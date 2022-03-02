TOPNAME=soc_riscv_zhoutao_top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc -Wall --trace  \
								-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir 
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR)) 

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp) 
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk 

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" 
LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
#	@rm -rf $(OBJ_DIR)
	@echo " $(VERILATOR) $(VERILATOR_CFLAGS)  -top $(TOPNAME) $^ $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) --Mdir $(OBJ_DIR) -exe -o $(abspath $(BIN)) "
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		-top $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))\
		--Mdir $(OBJ_DIR) -exe -o $(abspath $(BIN))
run: sim 

sim:$(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "commit ------------------ yes or no you must to see"
	@$^
clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean run 


#TB_TOP_MODULE = ./csrc/tb_soc_riscv_zhoutao.cpp
#VSRC			:= ./vsrc
#
#INCFLAGUDE 	:= include
#
#VSOURCEDIRS	:= $(shell find $(VSRC) -type d)
#INCLUDEDIRS := $(shell find $(INCLUDE) -type d) 
#RM	= rm -f
#MD	:= mkdir -p
#
#INCLUDES	:= $(patsubst %,-I%, $(INCLUDEDIRS:%/=%)) 
#VSOURCES		:= $(wildcard $(patsubst %,%/*.v, $(VSOURCEDIRS))) 
#
#VSOURCES_NOPREFIX := $(VSOURCES:./vsrc/%=%)  
##VSOURCES_mk		:=$(addprefix V,$(patsubst %.v,%.mk,$(VSOURCES_NOPREFIX)))
#VSOURCES_mk		:= Vsoc_riscv_zhoutao_top.mk
#
#all:sim
#	@echo "Write this Makefile by your self."
#	@echo $(VSOURCES_NOPREFIX)
#	@echo $(VSOURCES_mk)
#
#sim:waveform.vcd
#	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
#	@echo "###Open the  WAVES ###"
#	@echo "Write this Makefile by your self."
#	gtkwave waveform.vcd
#waveform.vcd: ./obj_dir/$(TOP_MODULE)
#	@echo
#	@echo "### START SIMULATING! ###"
#	@./obj_dir/V$(TOP_MODULE)
#
#./obj_dir/$(TOP_MODULE): verilate_stage
#	@echo
#	@echo "### BUILD SIM COMPLICAT! ###"
#	@echo $(VSOURCES_NOPREFIX)
#	@echo $(VSOURCES_mk)
#	make -C obj_dir -f $(VSOURCES_mk)
#
#verilate_stage: $(VSOURCES) $(TB_TOP_MODULE)
#	@echo
#	@echo "### VERILATING COMPLICATE! ###"
#	verilator -Wall --trace -cc $(VSOURCES) --exe $(TB_TOP_MODULE)
#	@touch verilate_stage
#
#lint: $(VSOURCES)
#	verilator --lint-only $(VSOURCES)
#
#clean:
#	rm  verilate_stage
#	rm -rf ./obj_dir
#	rm waveform.vcd

include ../Makefile
