VERILOG_SRC = core.v
VERILATOR_HOME = /usr/share/verilator
CPP_SRC = main.cpp

all: ${VERILOG_SRC} ${CPP_SRC}
	verilator -Wall --trace --timing -cc ${VERILOG_SRC} -exe ${CPP_SRC}
	(cd obj_dir; make -f Vcore.mk; mv Vcore ../run)
	./run

clean:
	rm -rf obj_dir run
