Module := VSoc


compile:
	verilator -cc -trace vsrc/*.v -top-module Soc

wave:
	verilator -cc -trace vsrc/*.v -top-module Soc --exe csrc/main.cpp
	make -C obj_dir/ -f $(Module).mk
	./obj_dir/$(Module)
	gtkwave wave.vcd

clean:
	rm -rf obj_dir/*