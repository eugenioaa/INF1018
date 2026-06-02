#include <stdio.h>
#include <stdint.h>
#include <sys/mman.h>
#include <unistd.h>
#include <string.h>

// protótipos
int bar(int x);
int add(int x);

// tipos
typedef int (*funcp)(int x);
typedef unsigned int uint32;

unsigned char codigo[] = {
    0xe9, 0x00, 0x00, 0x00, 0x00,  // call   jmp

};

int execpage(void *ptr, size_t len) {
#define PAGE_START(P) ((intptr_t)(P) & ~(pagesize-1))
#define PAGE_END(P)   (((intptr_t)(P) + pagesize - 1) & ~(pagesize-1))
    int ret;
    const long pagesize = sysconf(_SC_PAGE_SIZE);
    if (pagesize == -1)
        return -1;
    ret = mprotect((void *)PAGE_START(ptr),
        PAGE_END((intptr_t)ptr + len) - PAGE_START(ptr),
        PROT_READ | PROT_WRITE | PROT_EXEC);
    if (ret == -1)
        return -1;
    return 0;
#undef PAGE_START
#undef PAGE_END
}

int main() {
    int a = 5;
    int b;
    funcp f;

    execpage(codigo, sizeof(codigo));

    int32_t offset = (int32_t)((intptr_t)add - (intptr_t)(codigo + 5));
    memcpy(&codigo[1], &offset, 4);

    b = bar(a);
    printf("bar(%d) = %d\n", a, b);

    f = bar;
    b = f(a);
    printf("f(%d) = %d\n", a, b);

    f = (funcp)codigo;
    b = f(a);
    printf("f(%d) = %d\n", a, b);

    return 0;
}

int bar(int x) {
    return x + 1;
}

int add(int x) {
    return x + 1;
}