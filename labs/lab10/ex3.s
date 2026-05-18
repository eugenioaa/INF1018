.text
.globl boo

boo:
    pushq %rbx
    pushq %r12
    pushq %r13

    movq %rdi, %rbx
    movl %esi, %r12d
    movl %edx, %r13d

loop:
    cmpl $0, %r12d
    jle end

    movl 0(%rbx), %edi
    movl %r13d, %esi
    call f

    movl %eax, 4(%rbx)

    addq $8, %rbx
    decl %r12d
    jmp loop

end:
    popq %r13
    popq %r12
    popq %rbx
    ret