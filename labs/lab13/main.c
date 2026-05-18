#include <stdio.h>

// meus includes 
#include <stdint.h>
#include <sys/mman.h>
#include <unistd.h>

// minhas constantes

// meus prototipos
int bar(int x);

// meus tipos 
typedef int (*funcp) (int x);
typedef  unsigned int uint32;
unsigned char codigo[] = {
    0x55,                      // push   %rbp
    0x48, 0x89, 0xe5,          // mov    %rsp,%rbp
    0x89, 0xf8,                // mov    %edi,%eax
    0xff, 0xc0,                // inc    %eax
    0xc9,                      // leave
    0xc3                       // ret
};
int execpage(void *ptr, size_t len) {
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
}


int bar(int(x)){
    return x+1;
}



int main(){
    
    
    int a = 5;
    int b;
    funcp f;        // f é ponteiro para fuçao 

    b = bar(a);     // bar é o endereço da 
    printf("bar(%d) = %d\n", a, b);

    f = bar;        // f aponta para a funcao bar
    b = f(a);
    printf("f(%d) = %d\n", a, b);

    f = (funcp)codigo;      // Isto muda nada do codigo 
    b = f(a);
    printf("f(%d) = %d\n", a, b);


    return 0;
}
