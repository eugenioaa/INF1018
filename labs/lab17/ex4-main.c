#include <stdio.h>

struct X1 {
    int vi;
    float vf;
};

double foo(double vd, int vi);

double pack1(struct X1 *px, int n);

int main() {
    struct X1 arr[3] = {
        {1, 1.5f},
        {2, 2.5f},
        {3, 3.5f}
    };
    
    double res = pack1(arr, 3);
    printf("%f\n", res);
    
    return 0;
}