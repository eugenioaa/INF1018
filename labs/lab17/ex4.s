.global pack1
pack1:
    pushq %rbx
    pushq %r12
    subq $8, %rsp
    movq %rdi, %rbx
    movl %esi, %r12d
    pxor %xmm0, %xmm0
    movsd %xmm0, (%rsp)

.Lpack1_loop:
    testl %r12d, %r12d
    jle .Lpack1_end
    cvtss2sd 4(%rbx), %xmm0
    movl 0(%rbx), %edi
    call foo
    movsd (%rsp), %xmm1
    addsd %xmm0, %xmm1
    movsd %xmm1, (%rsp)
    addq $8, %rbx
    decl %r12d
    jmp .Lpack1_loop
    
.Lpack1_end:
    movsd (%rsp), %xmm0
    addq $8, %rsp
    popq %r12
    popq %rbx
    ret