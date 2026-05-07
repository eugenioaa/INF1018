  .data
  nums: .int 3, -5, 7, 8, -2
  s1:   .string "%d\n"

  .text
  .globl main
  main:
  /* prologo */
     pushq %rbp
     movq  %rsp, %rbp
     subq  $16, %rsp
     movq  %rbx, -8(%rbp)
     movq  %r12, -16(%rbp)

  /* coloque seu codigo aqui */
    movl $0, %ebx
    leaq nums(%rip), %r12

LOOP:
    movl    (%r12), %edi
    movl    $1, %esi
    call    filtro

    leaq    s1(%rip), %rdi 
    movl    %eax, %esi
    movb    $0, %al @
    call printf

    addq    $4, %r12
    addl    $1, %ebx

    cmpl    $5, %ebx
    jl      LOOP
    movl $0, %eax

  /* finalizacao */
     movq -8(%rbp), %rbx
     movq -16(%rbp), %r12
     leave
     ret
