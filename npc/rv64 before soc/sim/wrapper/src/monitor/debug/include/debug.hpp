#ifndef __SELF_DEBUG__
#define __SELF_DEBUG__

class debug{
public:
    debug(): pc(0x80000000), pc_req(0), 
            inst(0x0), inst_valid(0), load_use(0),
            op_a(0), op_b(0), result(0), br_yes(0),
            rd(0), reg_wdata(0), reg_wen(0) {}


    void update(unsigned long pc, bool pc_req, unsigned int inst, 
        bool inst_valid, bool load_use, unsigned long op_a, unsigned long op_b, unsigned long result, bool br_yes, unsigned int rd, unsigned long reg_wdata,
        bool reg_wen);

    void show();

private:
    unsigned long pc;
    bool pc_req;
    
    unsigned int inst;
    bool inst_valid;
    bool load_use;
    
    unsigned long op_a;
    unsigned long op_b;
    unsigned long result;
    bool br_yes;
    
    unsigned int rd;
    unsigned long reg_wdata;
    bool reg_wen;
};

extern debug debug_ins;

#endif