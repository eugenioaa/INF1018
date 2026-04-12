### Correspondencia entre C e S

1. A linha de char S2[ ], representa uma lista de caracteres em C, no assembly esta é representada pelo .data e S2:...
2. char *pc = S2 é representada pelo movq  $S2, %r12 
3. Ja o while:
    - cmpb  $0...
    - addq e jmp L1 e o que fazem o while voltar ficar em loop quando a propiedade nao é antiguida 
4. O L2 faz a funcao interna do while ele faz a tradução de cada charater de seu numero a seu equivalente em letra.

Para finalizar, após chegar no final da frase com o "0" o while finaliza e a parte que diz "este trecho imprime o valor de %eax (estraga %eax)" faz a impresao final que esta guardada na memoria