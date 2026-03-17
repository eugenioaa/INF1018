# Itinerario aula 5 17-03

Em esta aula vimos as diferentes maneira de manipular valores decimais/binario na linguagem C.<br>
Primeiro vimos que para transformar um numero negativo decimal em binario temos que:
1. encontrar o binario  do numero (positivo)
	- -25 → 25 → 0001 1001
2. Invertimos o binario (onde é 0 vira 1 e vise-versa)
	- 0001 1001 → 1110 0110
3. Somamos 1 no valor menos significativo:
	- 1110 0110 + 0000 0001 = 1110 0111 = -25

Se olhamos para o bit mais significativo podemos ver si se positivo (0) ou negativo (1)

**Isto somente em 8 bits!**

Para fazer as operações ==NÃO IMPORTA O SINAL==, pois o valor vai dar o mesmo<br>
Exemplo 1:

- 0001 1001 -> 25
- 1110 0111 -> 231
- 0000 0000 -> 256
    
Como é 256 em binario (8 bits)? = **0000 0000**
    

|Exemplo 2:||   |
|:---|--|--:|
|+25 ||0001 1001|
|-4  |+|1111 1100|
|**21**|  |**0001 0101**|
      
<limits.h> da constantes 

`unsigned` me diz que é positivo apesar que seu valor mais significativo seja 1 
Quando nao tiver `unsigned` e começar com 1, este é Negativo

