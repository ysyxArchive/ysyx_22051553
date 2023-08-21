#include "./include/debug.hpp"
#include <stdio.h>

debug debug_ins;

void debug::update(
        unsigned long pc,
        bool pc_req,
        unsigned int inst,
        bool inst_valid,
        unsigned long op_a,
        unsigned long op_b,
        unsigned long result,
        unsigned int rd,
        unsigned long reg_wdata,
        bool reg_wen)
{
    this->pc = pc;
    this->pc_req = pc_req;
    this->inst = inst;
    this->inst_valid = inst_valid;
    this->op_a = op_a;
    this->op_b = op_b;
    this->result = result;
    this->rd = rd;
    this->reg_wdata = reg_wdata;
    this->reg_wen = reg_wen;
}

void debug::show(){
    printf("inst is %08x\n", inst);
}