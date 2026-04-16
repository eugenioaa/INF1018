/*
#include <stdio.h>
#include "header.h"

int main(){
    int a, b;
    int res;

    a = 5;
    b = 10;
    res = mult(a,b);

    printf("%d x %d = %d", a, b, res);

    return 0;
}
*/

/*
Dicionario
Reg Var
edi a 
esi b 
ecx res 
*/

#include "header.h"
#define OP1 5
#define OP2 10
#int mult(int a, int b) 
#int soma(int a, int b)

.text
mult:
.globl mult
    pushq   %rbp        # salva o endereço base RA da função chamadora
    movq    %rsp, %rbp  # cria base do RA da função mult

    # TODO: salvar registradores calle-saved que vou usar
    movl    $0, %ecx    # res=0 

LOOP:
    /*
    for(int i=0; i<b; i++)  =   i = 0 
                                while(i<b)
                                    res = soma(res,a);
                                i++             
    */

    # i = 0:
    movl    $0, %r13d

    # while (i<b):
    cmpl    %esi, %r13d
    jge FORA_LOOP

    # res =soma(res,a):
    # liberar os registradores parâmetros
    movl    %edi, -12(%rbp)
    movl    %esi, -16(%rbp)
    # preparar os parâmetros
    movl    %ecx, %edi  # 2o parâmetros
    movl    %ecx, %edi  # 1o parâmetros
    call    soma           # chamada da função soma
    movl    %eax, %ecx
    # restaurar os registradores salvos
    movl    -12(%rbp), %edi
    movl    -16(%rbp), %esi

    incl    %r13d
    jmp     LOOP

FORA_LOOP:
    #return res
    movl %ecx, %eax

    # restaurar os registradores calle-saved
    movq    -8(%rbp), %r13
    #destruir o RA
    leave
    # retornar
    ret

soma:
.globl soma
    pushq   %rbp       # salva a base do RA da chamadora
    movq    %rsp, %rbp # cria a base do RA da soma

    # salvar registradores called-saved usados

    # return a+b
    # tmp  = a+ b;
    # tmp = a 
    movl    %edi, % eax

    # tmp += b
    addl    %esi, %eax

    # return tmp

    movq    %rbp, %rsp
    popq    %rbp
    ret