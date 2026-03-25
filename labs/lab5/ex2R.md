# Resposta ex2

Output do terminal:
```
Tamanho da struct X (sizeof): 12 bytes

Dump da struct X:
0x55a523688020 - a4
0x55a523688021 - a3
0x55a523688022 - a2
0x55a523688023 - a1
0x55a523688024 - b2
0x55a523688025 - b1
0x55a523688026 - 00
0x55a523688027 - 00
0x55a523688028 - c4
0x55a523688029 - c3
0x55a52368802a - c2
0x55a52368802b - c1
```

Sim, existe um burraco na estructura, ele é o `00 00`. No caso do nosso struct temos em esta ordem: `int` **4 bytes**, `short` **2 bytes** e `int` **4 bytes** de novo. Como o short só ocupado 2 bytes a variavel `c` não pode ir de seu lado já que esta so pode començar em multiplos de 4, entao o "burraco" que vemos é chamado de padding para chegar no multiplo de 4 