# INF1018 — O que aprendi: Código de Máquina

## 1. Assembly → código de máquina
- Escrevi uma função simples em assembly (`foo.s`)
- Usei `gcc -c -o foo.o foo.s` para gerar o arquivo objeto
- Usei `objdump -d foo.o` para ver os bytes gerados em hexadecimal

## 2. Executando código de máquina em C
- Copiei os bytes do `objdump` para um array `unsigned char codigo[]`
- Converti o endereço do array para ponteiro de função com `typedef int (*funcp)(int)`
- Chamei o código de máquina como se fosse uma função C normal

## 3. Chamada de função dentro do código de máquina (`call`)
- O opcode `e8` representa a instrução `call`
- Os 4 bytes seguintes são o **offset relativo** até a função chamada, em little-endian
- O offset = endereço da função − endereço da instrução seguinte ao `call`
- O offset deve ser calculado e corrigido **em tempo de execução**, pois o endereço do array só é conhecido na execução

## 4. Permissão de execução na memória
- Código em array global não é executável por padrão no Linux
- Solução: usar `mprotect` via `execpage()` para marcar a página como executável

## 5. `jmp` vs `call`
- O opcode `e9` representa `jmp` — mesmo formato de offset que o `call`
- Diferença: `call` empilha o endereço de retorno; `jmp` não
- Com `jmp`, o `ret` da função destino retorna direto para quem chamou `foo`
- O prólogo (`push %rbp` / `mov %rsp,%rbp`) deve ser removido para não corromper a pilha