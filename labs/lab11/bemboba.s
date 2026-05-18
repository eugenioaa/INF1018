/*
int bemboba (int num) {
  int local[4];
  int *a;
  int i;

  for (i=0,a=local;i<4;i++) {
    *a = num;
    a++;
  }
  return addl (local, 4);
}
 */

.text
.globl bemboba
.type bemboba, @function

bemboba:
    pushq   %rbp
    movq    %rsp, %rbp
    subq    $32, %rsp
    movl    %edi, -32(%rbp)
    movl    $0, -28(%rbp)
    leaq    -16(%rbp), %rax
    movq    %rax, -24(%rbp)
    jmp     .L2
.L3:
    movq    -24(%rbp), %rax
    movl    -32(%rbp), %edx
    movl    %edx, (%rax)
    addq    $4, -24(%rbp)
    addl    $1, -28(%rbp)
.L2:
    cmpl    $4, -28(%rbp)
    jl      .L3
    leaq    -16(%rbp), %rdi
    movl    $4, %esi
    call    addl@PLT
    leave
    ret
