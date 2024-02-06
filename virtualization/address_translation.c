#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
    *   each process has its virtual memory.
    *   when we try to access memory -> address accesed is translated to physical address.
        that means during every instuction execution, at least one translation happens!
        thats why to make it fast, its done at hardware level.
    *   CPU has MMU, which includes relocation (R,physical addr offset for particular process) and 
        limit register (L,size of process' virtual memory). So, phy_addr = R+virt_addr if virt_addr <= L
    *   When context switch happens, OS must store both regs. value somewhere: its either back in memory or PCB.
    *   Os might change the physical address for process when it is paused due to scheduling algo.

    source: https://pages.cs.wisc.edu/~remzi/OSTEP/vm-mechanism.pdf (addr trans)
            https://student.cs.uwaterloo.ca/~cs350/W19/notes/virtualmemory-1up.pdf (virt mem)  
*/
int main(int argc, char* argv[]){

    // read its assembly
    // gcc -S address_translation.c
    int x = 10;
    x = x + 3;

    return 0;
}