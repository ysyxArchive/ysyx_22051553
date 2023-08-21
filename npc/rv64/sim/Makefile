Module := VSoc
SRCS = $(shell find ./wrapper/src -name "*.cpp" -or -name "*.c")
WORK_DIR := $(shell pwd)
INC_PATH := $(abspath $(shell find . -type d -name "include"))
INCLUDE := $(INC_PATH:%=-I %)


$(info $(INC_PATH))

build:
	-rm vsrc/*.v
	cp ../build/*.v vsrc/
	verilator -cc -trace vsrc/*.v -top-module Soc

compile:
	verilator -cc -trace vsrc/*.v -CFLAGS "$(INCLUDE)" -top-module Soc --exe $(SRCS) -LDFLAGS -lreadline

#是需要在cflags里加include,而不是直接-Iinclude

exe:
	make -C obj_dir/ -f $(Module).mk

run: build compile exe
	./obj_dir/$(Module)

clean:
	rm -rf obj_dir/*