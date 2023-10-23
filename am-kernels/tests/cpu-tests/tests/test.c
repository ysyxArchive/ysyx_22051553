#include "trap.h"



int main() {

	asm volatile("li t2, 3; li t1, 1; csrrwi x0, 0x305, 3; csrrci t0, 0x305, 1; csrrs t0, 0x305, x0");


	return 0;
}
