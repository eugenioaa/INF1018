

.text 
.globl foo
foo:
    pushq   %rbp
    movq    %rsp, %rbp

    # salvar callee-saved

    # preparar os parametros
    # ja estao no edi
    call add

    # restaurar callee-saved
    # remover RA 
    leave

    # retornar
    ret
    