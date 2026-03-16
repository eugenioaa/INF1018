#include <stdio.h>

unsigned char rotate_left(unsigned char x, int n){
    unsigned char safe, rest;
    
    if (n < 0 || n >= 8){
        return 0;
    }
    
    safe = x <<n;

    rest = x >> (8-n);

    return rest | safe;
}

int main(){
    unsigned char x = 0x61;

    printf("Exemplo 1:\nValor original: 0x%x\nMovido %d para a esquerda: 0x%x\n\n", x, 2, rotate_left(x,2));

    printf("Exemplo 2:\nValor original: 0x%x\nMovido %d para a esquerda: 0x%x\n\n", x, 4, rotate_left(x,4));


    printf("Exemplo 3:\nValor original: 0x%x\nMovido %d para a esquerda: 0x%x\n\n", 0x80, 1, rotate_left(0x80,1));

    printf("Exemplo 4:\nValor original: 0x%x\nMovido %d para a esquerda: 0x%x\n", 0x01, 7, rotate_left(0x01,7));
     
}