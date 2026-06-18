# INF1018 — Estruturas, Assembly e Ligação

## Inspeção de Memória em Estruturas
- **Mapeamento de Bytes**: Visualização do layout e alinhamento interno de uma `struct` na memória através de um dump de bytes (`unsigned char *`).

## Ponto Flutuante e Funções em Assembly
- **Conversão de Tipos**: Uso das instruções `cvtsi2sd` e `cvtss2sd` para converter inteiros e floats para double antes de operações aritméticas.
- **Preservação de Contexto**: Uso da pilha (`pushq`/`popq`) e de registradores protegidos (`%rbx`, `%r12`) para manter a integridade dos dados durante chamadas de funções externas em loops.

## Tabela de Símbolos e Modificador `static`
- **Classificação com `nm`**: Identificação de símbolos exportados do arquivo objeto (`T` para código, `B` para dados globais) e importados/indefinidos (`U`).
- **Ligação Interna**: O modificador `static` restringe o escopo da variável ao seu próprio arquivo (símbolo local `b`), isolando-a de modificações ou conflitos com outros módulos.