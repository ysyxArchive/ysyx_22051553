BUILD_DIR ?= ./build
MODULE ?= playground

export PATH := $(PATH):$(abspath ./utils)

test:
	mill -i $(MODULE).test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	# mill -i $(MODULE).test.runMain Elaborate -td $(MODULE)/$(BUILD_DIR)    //test.runMain?
	mill -i $(MODULE).runMain rv64.Elaborate -td $(MODULE)/$(BUILD_DIR)

help:
	mill -i $(MODULE).test.runMain Elaborate --help

compile:
	mill -i $(MODULE).compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i $(MODULE).reformat

checkformat:
	mill -i $(MODULE).checkFormat

clean:
	-rm -rf $(BUILD_DIR)               //-忽略错误
	rm -rf $(MODULE)/$(BUILD_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	make run -C $(MODULE)/sim/ -f Makefile

include ../Makefile
