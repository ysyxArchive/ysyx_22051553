Module := VSoc
SRCS = $(shell find ./wrapper/src -name "*.cpp" -or -name "*.cc")
WORK_DIR := $(shell pwd)
INC_PATH := $(abspath $(shell find . -type d -name "include"))
INCLUDE := $(INC_PATH:%=-I %)
LLVM_FLAGS := $(filterout, -D__STDC_FORMAT_MACROS, $(shell llvm-config --cxxflags)) -fPIE
# verilator中定义了-D__STDC_FORMAT_MACROS，会导致重复定义。
LLVM_LIB := $(shell llvm-config --libs)

# @verilator -cc --prof-cfuncs -trace vsrc/*.v -CFLAGS "$(INCLUDE) $(LLVM_FLAGS)" -top-module Soc --exe $(SRCS) -LDFLAGS "-lreadline -lpcre $(LLVM_LIB) -lSDL2"
build:
	@-rm vsrc/*.v
	@cp ../build/*.v vsrc/
	@verilator -cc -trace vsrc/*.v -top-module Soc

compile:
	@verilator -cc -trace vsrc/*.v -CFLAGS "$(INCLUDE) $(LLVM_FLAGS)" -top-module Soc --exe $(SRCS) -LDFLAGS "-lreadline -lpcre $(LLVM_LIB) -lSDL2"

#是需要在cflags里加include,而不是直接-Iinclude

exe:
	@make -C obj_dir/ -f $(Module).mk

run: build compile exe
	@./obj_dir/$(Module)

clean:
	rm -rf obj_dir/*

