#include <stdio.h>
#include <math.h>

#define getsig(x)        ((x)>>31 & 1)
#define getexp(x)        ((x)>>23 & 0xff)
#define getfrac(x)       ((x) & 0x7fffff)
#define makefloat(s,e,f) ((s & 1)<<31 | (((e) & 0xff) << 23) | ((f) & 0x7fffff))

typedef union {
  float f;
  unsigned int i;
} U;

float float2(float f);
float int2float(int i);

int main() {
   int i;

    printf("\n******** float2 ****************\n");
    printf(" float2(2.0) = %f\n", float2(2.0));
    printf(" float2(3.5) = %f\n", float2(3.5));
    printf(" float2(-5.0) = %f\n", float2(-5.0));
    printf(" float2(0.5) = %f\n\n", float2(0.5));

   printf("\n******** int2float ****************\n");
   i = 0;
   printf(" %d -> %+10.4f\n", i, int2float(i));
   i = 1;  
   printf(" %d -> %+10.4f\n", i, int2float(i));
   i = -1;  
   printf(" %d -> %10.4f\n", i, int2float(i));
   i = 0x7fffffff;  
   printf(" %d -> %+10.4f\n", i, int2float(i));
   i = -i;
   printf(" %d -> %+10.4f\n", i, int2float(i));
   i = 12345;
   printf(" %d -> %+10.4f\n", i, int2float(i));
   i = -12345;
   printf(" %d -> %+10.4f\n", i, int2float(i));
  
   return 0;
}

float float2(float f){
    U u ;
    u.f = f;
    unsigned int x = u.i;

    unsigned int s = getsig(x);
    unsigned int e = getexp(x);
    unsigned int frac = getfrac(x);

    e = e + 1;

    u.i = makefloat(s, e, frac);
    return u.f;
}

float int2float(int i){
    U u;
    if (i == 0) {
        u.i = 0;
        return u.f;
    }
    int s = (i < 0);

    int valor;
    if (s == 1){
        valor = -i;
    }else{
        valor = i;
    }

    int E = 30;
    while (E >= 0){
        if ((valor >> E ) & 1){
            
            break;
        }
        E--;
    }

    int frac;
    if (E >= 23) {
        frac = (valor - (1 << E)) >> (E - 23);
    } else {
        frac = (valor - (1 << E)) << (23 - E);
    }
    
    int e = E + 127;
    
    u.i = makefloat(s, e, frac);
    return u.f;

}