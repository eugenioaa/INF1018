.text 
.globl add2

add2:
    pushq   %rbx   # cofre

    cmpq $0, %rdi
    je l_null

    movl 0(%rdi), %ebx
    movq 8(%rdi), %rdi
    call add2

    addl %ebx,%eax
    jmp l_end

l_null:
    movl  $0, %eax

l_end:
    popq %rbx
    ret 
