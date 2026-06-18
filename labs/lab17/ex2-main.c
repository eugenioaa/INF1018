#include <stdio.h>

// Declaramos que a função foo existe em outro arquivo (nosso Assembly)
double foo(double a, int b);

int main() {
    // Teste 1: Valores normais
    double res1 = foo(2.5, 4);
    printf("Teste 1: foo(2.5, 4) = %f (Esperado: -10.000000)\n", res1);

    // Teste 2: b negativo (resultado deve ficar positivo pois -(-b) = +b)
    double res2 = foo(3.0, -5);
    printf("Teste 2: foo(3.0, -5) = %f (Esperado: 15.000000)\n", res2);

    // Teste 3: a negativo e b positivo
    double res3 = foo(-1.5, 3);
    printf("Teste 3: foo(-1.5, 3) = %f (Esperado: 4.500000)\n", res3);

    // Teste 4: Multiplicação por zero
    double res4 = foo(10.2, 0);
    printf("Teste 4: foo(10.2, 0) = %f (Esperado: -0.000000 ou 0.000000)\n", res4);

    return 0;
}