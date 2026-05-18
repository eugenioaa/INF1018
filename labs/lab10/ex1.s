.text 
.globl add

# %rdi = x
# %eax = a = retorno
# 0(%rdi) = val
# 8(%rdi) = next

add:
    mov $0, %eax

l_loop:
    cmpq $0,%rdi
    je l_fim

    addl 0(%rdi), %eax
    movq 8(%rdi), %rdi

    jmp l_loop

l_fim:
    ret 
    
