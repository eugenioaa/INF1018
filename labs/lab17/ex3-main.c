#include <stdio.h>

struct X {
    int vi;
    double vd;
    struct X *next;
};

double foo(double vd, int vi) {
    return vd + vi;
}

double pack(struct X *px);

int main() {
    struct X x3 = {3, 3.5, NULL};
    struct X x2 = {2, 2.5, &x3};
    struct X x1 = {1, 1.5, &x2};

    double res = pack(&x1);
    printf("%f\n", res);
    
    return 0;
}