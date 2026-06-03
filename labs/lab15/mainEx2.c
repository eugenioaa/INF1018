#include <stdio.h>
#include <math.h>

float foo1 (float a, float b);

int main (){
    float a = 2;
    float b = 3;
    printf("sin(%f) + %f = %.2f\n", a, b,(sin(a) + b));

    printf("Função: %.2f\n", foo1(a,b));
    return 0;
}
