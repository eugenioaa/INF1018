.text
.globl map2

map2:
    pushq %rbx
    pushq %r12
    pushq %r13

    movq %rdi, %rbx
    movq %rsi, %r12
    movl %edx, %r13d

L1:
    cmpl $0, %r13d
    jle L2

    movl (%rbx), %edi
    call f

    movl %eax, (%r12)

    addq $4, %rbx
    addq $4, %r12
    decl %r13d
    jmp L1

L2:
    popq %r13
    popq %r12
    popq %rbx
    ret