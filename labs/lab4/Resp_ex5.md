## Conversao a mão
1. Representação Original (sc)
    - Valor: -1
    - Tipo: signed char (8 bits)
    - Binário: 1111 1111 (Em complemento de dois, todos os bits 1 representam -1).
    - Hexadecimal: 0xff

2. Extensão de Sinal (O "Pulo do Gato")

    O bit mais à esquerda (MSB) do char é o bit de sinal. Neste caso, ele é 1.

    Esse bit 1 é "copiado" para preencher todos os novos 24 bits à esquerda do int.

    Resultado em 32 bits: 11111111 11111111 11111111 11111111

3. Representação Final (ui)

    Bits internos: 0xffffffff

    Tipo: unsigned int

Agora que o tipo é unsigned o valor ja não é -1 mas sim o valor máximo positivo de 32 bits: 4.294.967.295<br>
Como visto no anterior exercicio.