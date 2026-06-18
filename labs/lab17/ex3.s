.global pack
pack:
    pushq %rbx
    subq $16, %rsp
    movq %rdi, %rbx
    pxor %xmm0, %xmm0
    movsd %xmm0, (%rsp)
    
.Lpack_loop:
    testq %rbx, %rbx
    je .Lpack_end
    movsd 8(%rbx), %xmm0
    movl 0(%rbx), %edi
    call foo
    movsd (%rsp), %xmm1
    addsd %xmm0, %xmm1
    movsd %xmm1, (%rsp)
    movq 16(%rbx), %rbx
    jmp .Lpack_loop

.Lpack_end:
    movsd (%rsp), %xmm0
    addq $16, %rsp
    popq %rbx
    ret