Module := ?


compile:
	verilator -cc -trace vsrc/*.v

wave:
	verilator -cc -trace vsrc/*.v --exe csrc/main.cpp
	make -C obj_dir/ -f $(Module).mk
	./obj_dir/$(Module)
	gtkwave wave.vcd