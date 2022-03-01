TOP_MODULE=soc_riscv_zhoutao_top
TB_TOP_MODULE = ./csrc/tb_soc_riscv_zhoutao.cpp
VSRC			:= ./vsrc

INCLUDE 	:= include

VSOURCEDIRS	:= $(shell find $(VSRC) -type d)
INCLUDEDIRS := $(shell find $(INCLUDE) -type d) 
RM	= rm -f
MD	:= mkdir -p

INCLUDES	:= $(patsubst %,-I%, $(INCLUDEDIRS:%/=%)) 
VSOURCES		:= $(wildcard $(patsubst %,%/*.v, $(VSOURCEDIRS))) 

VSOURCES_NOPREFIX := $(VSOURCES:./vsrc/%=%)  
#VSOURCES_mk		:=$(addprefix V,$(patsubst %.v,%.mk,$(VSOURCES_NOPREFIX)))
VSOURCES_mk		:= Vsoc_riscv_zhoutao_top.mk

all:sim
	@echo "Write this Makefile by your self."
	@echo $(VSOURCES_NOPREFIX)
	@echo $(VSOURCES_mk)

sim:waveform.vcd
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "###Open the  WAVES ###"
	@echo "Write this Makefile by your self."
	gtkwave waveform.vcd
waveform.vcd: ./obj_dir/$(TOP_MODULE)
	@echo
	@echo "### START SIMULATING! ###"
	@./obj_dir/V$(TOP_MODULE)

./obj_dir/$(TOP_MODULE): verilate_stage
	@echo
	@echo "### BUILD SIM COMPLICAT! ###"
	@echo $(VSOURCES_NOPREFIX)
	@echo $(VSOURCES_mk)
	make -C obj_dir -f $(VSOURCES_mk)

verilate_stage: $(VSOURCES) $(TB_TOP_MODULE)
	@echo
	@echo "### VERILATING COMPLICATE! ###"
	verilator -Wall --trace -cc $(VSOURCES) --exe $(TB_TOP_MODULE)
	@touch verilate_stage

lint: $(VSOURCES)
	verilator --lint-only $(VSOURCES)

clean:
	rm  verilate_stage
	rm -rf ./obj_dir
	rm waveform.vcd

include ../Makefile
