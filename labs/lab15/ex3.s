/*
double foo2 (float a, float b) {
  return sin(a) + cos(b);
}
*/

.data
.text
.globl foo2

// float a =  %xmm0 float b = %xmm1

foo2:
    subq        $16, %rsp
    movss       %xmm1, 0(%rsp)  # b guardado

    cvtss2sd    %xmm0, %xmm0    
    call        sin

    movsd       %xmm0, 8(%rsp)    # sin(a) = %xmm2

    movss       0(%rsp), %xmm1   # b
    
    cvtss2sd    %xmm1, %xmm1    # float b -> double b
    movsd       %xmm1, %xmm0    # b = %xmm0
    
    call        cos             # cos(b)

    movsd       8(%rsp), %xmm2   
    addq        $16, %rsp

    addsd       %xmm2, %xmm0
    ret
    