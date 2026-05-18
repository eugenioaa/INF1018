/*
int novonum(void) {
  int minhalocal;
  printf("numero: ");
  scanf("%d",&minhalocal);
  return minhalocal;
}
*/

.file   "novonum.c"
.section .rodata

.LC0:
    .string "numero: "
.LC1:
    .string "%d"


.text
.globl novonum
.type novonum, @function

novonum: 
  pushq   %rbp
  movq    %rsp,%rbp
  subq    $16, %rsp

  leaq    .LC0(%rip), %rdi
  movl    $0, %eax
  call    printf@PLT

  leaq    .LC1(%rip), %rdi
  leaq    -4(%rbp), %rsi
  movl    $0, %eax
  call    scanf@PLT

  movl -4(%rbp), %eax

  leave
  ret

.size   novonum, .-novonum
