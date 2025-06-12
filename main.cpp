#include <stdio.h>
#include <stdlib.h>
#include "Vcore.h"
#include "verilated.h"

int32_t elapsedtime = 0;
double sc_time_stamp() { return elapsedtime; }

int main (int argc, char *argv[])
{
        Verilated::commandArgs(argc, argv);
        Verilated::traceEverOn(true);

        Vcore *core = new Vcore;

        core->rst = 0;

        for (int i = 0; i < 20; i++)
        {
                core->eval();
                
                core->clk = !core->clk;

                elapsedtime++;
        }

        printf("Finished at time = %d\n", elapsedtime);
        
        core->final();
        delete core;

        return 0;
}
