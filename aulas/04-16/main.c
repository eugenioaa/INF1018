#include <stdio.h>
#include "header.h"

int main(){
    int a, b;
    int res;

    a = 5;
    b = 10;
    res = mult(a,b);

    printf("%d x %d = %d", a, b, res);

    return 0;
}