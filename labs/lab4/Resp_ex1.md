### Variável c = 150 (1 byte)

Cálculo para Hexadecimal:
1. 150 / 16 = 9
2. 16 * 9 = 144
3. 150 - 144 = 6 (Resto 6)

Resultado Hex: 0x96

### Variável s = -3 (short, 2 bytes)
1. (Valor Positivo): +3 em 16 bits = 0003
2. (Binário): 0000 0000 0000 0011
3. (Inverter Bits): 1111 1111 1111 1100 (Hex: fffc)
4. (Somar 1): fffc + 1 = fffd

Resultado Hex Final: 0xfffd

O que o Dump mostra (Little Endian): fd ff

### Variável i = -151 (int, 4 bytes)
1. (Valor Positivo 151): 151 / 16 = 9 (Resto 7) -> 0x97 <br> Em 32 bits: 00 00 00 97
2. (Inverter Bits): ff ff ff 68
3. (Somar 1): ffffff68 + 1 = ffffff69

Resultado Hex Final: 0xffffff69

O que o Dump mostra (Little Endian): 69 ff ff ff