/*
float foo1 (float a, float b) {
  return sin(a) + b;
}
 */

.data 
.text
.globl foo1

// float a =  %xmm0 float b = %xmm1

foo1:
    subq        $8, %rsp
    movss       %xmm1, (%rsp)

    cvtss2sd    %xmm0, %xmm0
    call        sin

    movss       (%rsp), %xmm1
    addq        $8, %rsp     

    cvtss2sd    %xmm1, %xmm1
    addsd       %xmm1, %xmm0
    cvtsd2ss    %xmm0, %xmm0
    ret

