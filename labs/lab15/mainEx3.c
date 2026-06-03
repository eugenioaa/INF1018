#include <stdio.h>
#include <math.h>

double foo2 (float a, float b);

int main (){
    float a = 4.5;
    float b = 7.2;
    printf("sin(%.2f) + cos(%.2f) = %.2f\n", a, b,(sin(a) + cos(b)));

    printf("Função:%.2f\n", foo2(a,b));
    return 0;
}
