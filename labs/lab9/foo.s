# %esi, n 
# %rdi, a[]
.text
.globl foo

foo:
    mov  $0, %edx    # i
    mov  $0, %eax    # s

l_loop:
    cmpl %esi, %edx
    jge  l_fim
    
    movl (%rdi, %rdx, 4),%ecx
    addl  %ecx, %eax

    cmpl $0, %ecx
    jne  l_prox

    movl %eax, (%rdi, %rdx, 4)
    movl $0, %eax

l_prox:
    addl $1, %edx
    jmp l_loop
    

l_fim:
    ret
