.text 
.globl fat

fat:
    cmpl    $0 , %edi
    jne     L_calc

    movl    $1, %eax
    ret

L_calc:
    pushq   %rdi

    subl    $1, %edi
    call    fat

    popq    %rdi
    imull   %edi, %eax

    ret
