# LAB 11

Hoje vimos como montar uma funcao em assembly qual nos permite inseridir dados pelo teclado (scanf) apartir da traducao de funcoes em .c

- .text: usado para guardar insturcoes do codigo
- Temos que limpar o registrador de retorno para poder usar as funcoes printf/scanf (movl $0, %eax)
- O sufixo @PLT nas chamadas (call): avisa ao sistema que funcoes como printf e scanf sao externas e pertencem a biblioteca padrao (libc), permitindo que o ligador dinamico encontre os endereços delas em tempo de execucao.