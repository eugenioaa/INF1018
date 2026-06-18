# Resposta exer4 

a) ocorreu um erro ao tentar geraros .o, o erro explicado na terminal basicamente diz que existem multiples definições para `'a'`.

b) sim um erro ocorreu. Olhando para o nm o a é um B, ou seja --format=bsd quando antes era um U (--defined-only)

c) Ja neste caso tudo roda normal e o a no temp2 e um d (--dynamic), não acontence nenhum pelo o statcic que pusismos antes do `int`. O static se encarga de deixar esa declaraçao invisivel para o resto do codigo, é decir somente ese esse bloco de codigo a varaivel assumira o valor dado, sem poder ser afectado por codigo anterior or afectar codigo mais a frente.