#include <stdio.h>

float foo (double a, float b);

int main (){
    float a = 2.2;
    float b = 3.4;
    printf("(%.2f+%.2f)*(%.2f-%.2f) = %.2f\n", a, b,a,b,((a+b)*(a-b)));

    printf("Função: %.2f\n", foo(a,b));
    return 0;
}
