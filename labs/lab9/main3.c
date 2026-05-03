#include <stdio.h>

// 1. Protótipo da função assembly
void foo(int a[], int n);

int main() {
    // 2. Dados de teste
    int a[] = {10, 20, 0, 5, 5, 0};
    int n = 6;

    printf("Antes: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    // 3. Chamada da sua função assembly
    foo(a, n);

    printf("Depois: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}