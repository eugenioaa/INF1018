# INF1018 — Ponto Flutuante

## IEEE 754
Um float de 32 bits tem três campos: `s` (sinal), `exp` (expoente), `frac` (mantissa).
O valor representado é `(-1)^s × 1.frac × 2^(exp-127)`.

## Union
Permite ver os mesmos 32 bits como `float` ou `unsigned int`, possibilitando manipular bits de um float como inteiro.

## float2
Multiplicar por 2 = somar 1 ao `exp`. O `s` e o `frac` não mudam.

## int2float
Construir `s`, `exp` e `frac` manualmente a partir do inteiro:
- sinal: `i < 0`
- expoente: posição do bit `1` mais significativo
- frac: bits restantes deslocados para 23 bits
- caso especial: `i == 0` → todos os bits zero