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

    printf("Dump do int:\n");
    dump (&i, sizeof(i));

    printf("Dump do long:\n");
    dump(&l, sizeof(l));

    return 0;
}