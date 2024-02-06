#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
    *   Since only base+offset mechanism has some issues, we have better approach called segmentation.
    *   In segmentation, instead of mapping whole process data to single chunk in physical memory, we segment code,
        stack and heap and map them to different physical locations (each with its own base and limit values).
    *   To further improve memory usage, we add extra protection bit which indicates if that particular segment
        has read,write or both options! If read only segmenet present than we can share this segment with multiple
        processes (if needed).
    *   

    *   Source: https://pages.cs.wisc.edu/~remzi/OSTEP/vm-segmentation.pdf
                https://student.cs.uwaterloo.ca/~cs350/W19/notes/virtualmemory-1up.pdf [from page 11]


*/

int main(int argc, char* argv[]){


    return 0;
}