;
if (a==b){
    c=d
}
d = a+c
Variavies: a-> %eax, b -> %ebx, c -> %ecx, d -> %edx
;

    cmpl %ebx, %eax
    jne depois_if       ;Condiaçao Negativa do if;
    movl %edx, %ecx

depois_if:
    movl %eax, %edx
    addl %ecx, %edx