#include <stdio.h>

int main(void){
    unsigned int x = 0x87654321;
    unsigned int y, z;

    y=x-(x<<12);


    z=12;

    printf("%08x %08x\n", y, z);
}
