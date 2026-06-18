# INF1018 — Instruções de Ponto Flutuante

## Conversão de Tipos
- `cvtss2sd`: Converte `float` para `double` (precisão simples para dupla).
- `cvtsd2ss`: Converte `double` para `float` (precisão dupla para simples).

## Sufixos SSE
- `ss`: Operações escalares de precisão simples (ex: `movss`).
- `sd`: Operações escalares de precisão dupla (ex: `addsd`, `subsd`, `mulsd`).

## Chamadas de Função (sin/cos)
O argumento `double` deve estar em `%xmm0` antes do `call`. O resultado é retornado em `%xmm0`. Requer a flag `-lm` na compilação.

## Salvamento na Pilha
Registradores `%xmm` são *caller-saved*. Valores que precisam ser mantidos entre chamadas (como argumentos ou resultados parciais) devem ser guardados na pilha via `%rsp` e recuperados depois.

## Ausência de Protótipo
Se o protótipo não for declarado na `main`, o compilador assume que o retorno é um `int` (lido de `%eax`), resultando em valores incorretos ("lixo").