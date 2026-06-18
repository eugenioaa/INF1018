# INF1018 — Compilação e Ligação

## Inspeção de Símbolos (`nm`)
O comando `nm` permite inspecionar os símbolos gerados nos arquivos objeto (`.o`). Cada letra indica onde o símbolo reside:
- **U (Undefined)**: Símbolo referenciado no código, mas definido externamente (ex: `printf`).
- **T (Text)**: Código de função (instruções executáveis) definido no próprio arquivo.
- **D (Data)**: Variável global inicializada (ex: `int a = 1024;`).
- **B (BSS)**: Variável global não inicializada (alocada com zero).

## Consistência com Headers (`.h`)
A inclusão dos cabeçalhos garante a checagem de tipos. Se o tipo no `.c` for alterado (ex: `int` para `char`) e o `.h` mantiver o tipo antigo, ocorre um **erro de compilação**. Isso previne falhas silenciosas na linkedição.

## Múltiplas Definições e `static`
Declarar globalmente a mesma variável (como `int a;`) em dois arquivos diferentes gera um **erro de linkedição** por múltiplas definições.
Ao adicionar a palavra-chave `static` (`static int a = 1;`), a variável torna-se **invisível para o resto do código** (escopo local ao arquivo). Isso resolve o conflito, impedindo que ela afete ou seja afetada por módulos externos.

## Declarações Implícitas
Tentar tratar uma variável como função (ex: chamar `b()` sendo `b` um inteiro) causa um erro detetado pela compilação moderna do GCC: `implicit declaration of function`. O compilador interrompe o processo, pois a assinatura da função é desconhecida e inválida no escopo atual.
