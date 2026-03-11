#include <stdio.h>

void dump (void *p, int n){
    unsigned char *p1 = p;
    while (n--){
        printf("%p - %02x\n", p1, *p1);
        p1++;
    }
}

int main (void){
    int i = 10000;
    long l = 10000;
    short s = 10000;
    char a = 'a';
    char n = 97;

    printf("Dump do int:\n");
    dump (&i, sizeof(i));

    printf("Dump do long:\n");
    dump(&l, sizeof(l));

    printf("Dump para short:\n");
    dump(&s, sizeof(s));

    printf("Dump para char caracter:\n");
    dump(&a, sizeof(a));

    printf("Dump para char ASCII:\n");
    dump(&n, sizeof(n));

    return 0;
}