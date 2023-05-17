#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <nvboard.h>
#include <verilated.h>
#include "Vtop.h"


void nvboard_bind_all_pins(Vtop* top);

#define TEST_TIMES 20
int test_count = 0;

int main() {

    Vtop *dut = new Vtop;

    nvboard_bind_all_pins(dut);
    nvboard_init();

    while(1){
        int a = rand() & 1;
        int b = rand() & 1;
        dut -> a = a;
        dut -> b = b;
        dut -> eval();
        test_count ++;
        nvboard_update();
    }

}
