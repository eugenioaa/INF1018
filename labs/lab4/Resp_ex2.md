### Variável l = -32765 (short, 2 bytes)

Cálculo para Hexadecimal:
1. (Valor Positivo 32765 em Hex):
   32765 / 16 = 2047 (Resto 13 -> D)<br>
   2047 / 16 = 127 (Resto 15 -> F)<br>
   127 / 16 = 7 (Resto 15 -> F)<br>
   Resultado: 0x7ffd
2. (Inverter Bits): 1000 0000 0000 0010 (Hex: 0x8002)
3. (Somar 1): 8002 + 1 = 8003

Resultado Hex Final: 0x8003

O que o Dump mostra (Little Endian): 03 80

### Variável k = 32771 (unsigned short, 2 bytes)

Cálculo para Hexadecimal:
1. 32771 / 16 = 2048 (Resto 3)
2. 2048 / 16 = 128 (Resto 0)
3. 128 / 16 = 8 (Resto 0)

Resultado Hex Final: 0x8003

O que o Dump mostra (Little Endian): 03 80

### Explicação dos Resultados de l e k
Os dumps de 'l' e 'k' são idênticos porque o padrão de bits de -32765 (em complemento de dois) 
é exatamente igual ao padrão de bits de 32771 (em binário puro). 
O programa dump lê a memória bruta byte a byte, por isso os valores mostrados são iguais.

