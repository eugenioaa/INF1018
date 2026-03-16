#include <stdio.h>

unsigned char switch_byte(unsigned char x){
    unsigned char es = (x & 0xF0) >> 4;
    unsigned char di = (x & 0x0F) << 4;

    return (es | di);
}

int main(){
    printf("Byte original: %x\nSwitch Byte: %x\n", 0xAB, switch_byte(0xAB));
}