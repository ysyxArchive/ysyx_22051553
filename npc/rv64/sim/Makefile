Module := VSoc
SRCS = $(shell find ./wrapper/src -name *.cpp)


build:
	rm vsrc/*.v
	cp ../build/*.v vsrc/
	verilator -cc -trace vsrc/*.v -top-module Soc

compile:
	verilator -cc -trace vsrc/*.v -top-module Soc --exe $(SRCS) -LDFLAGS -lreadline
	make -C obj_dir/ -f $(Module).mk

run:
	./obj_dir/$(Module)

clean:
	rm -rf obj_dir/*