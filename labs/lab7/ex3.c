#include <stdio.h>

int n = 1;

int main(void){
    while (n < 11){
        printf("%d\n", n*n);
        n++;
    }
    return 0;
}