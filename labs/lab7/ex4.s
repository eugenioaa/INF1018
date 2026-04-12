.data
nums: .long 65, -105, 111, 34
Sf:  .string "%d\n"
.text
.globl  main

main:
   pushq   %rbp
    movq    %rsp, %rbp
    subq    $16, %rsp
    movq    %rbx, -8(%rbp)
    movq    %r12, -16(%rbp)

L1:
    cmpq    $4, %rbx
    je L2

    movl    nums(,%rbx,4), %eax
    addl    %eax, %r12d

    addq    $1, %rbx
    jmp     L1

L2:
    movq    $Sf, %rdi
    movl    %r12d, %esi
    movl    $0, %eax
    call    printf

    movl    $0, %eax
    movq    -8(%rbp), %rbx
    movq    -16(%rbp), %r12
    leave
    ret
