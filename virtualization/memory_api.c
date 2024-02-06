#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func(){
    /*
        sizeof: params passed to it are known at compile-time.
                so its an operator, not function.
        
    */
    char* x = (char *) malloc(sizeof(char)* 8);

    // we can store more data than we assigned for ourself
    // but if that address conflict with some other programs data, we wont be able to 
    // store our data there as that location is not ours!
    strcpy(x, "kokokokox"); // storing 9 bytes
    
    printf("Address: %p\n", x);
    printf("Value: %s\n",x);

    // to free the heap memory:
    // size not passed, only pointer passed! which means malloc library keep track of your size
    free(x);

    
}

int main(int argc,char* argv[]){

    func();

    return 0;
}
