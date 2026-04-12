.data
Sf: .string "%d\n"

.text
.globl main

main:
    pushq   %rbp
    movq    %rsp, %rbp
    subq    $16, %rsp       
    movq    %r12, -8(%rbp)

    movl    $1, %r12d      

L1:
    cmpl    $11, %r12d
    je L2

    movl    %r12d, %eax
    imull   %eax, %eax

    movq    $Sf, %rdi  
    movl    %eax, %esi
    movl    $0, %eax
    call    printf 

    add $1, %r12d
    jmp L1

L2:

    movl  $0, %eax           /* return 0 */
    movq  -8(%rbp), %r12     /* Recupera o valor original de r12 */
    leave
    ret
    