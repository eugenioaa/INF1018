# Resposta Exercico 4

### Programas 1 e 2
Este exercicio mostra como a limguagem c pode leer os bits completamente diferente uma variavel pelo seu tipo `signed` e `unsigned`. <br>

Quando é apenas um int `signed`, programa 1, o sinal de negativo (-) é considerado. Já no programa 2 `unsigend`, todos os bits valem o valor numérico positivo, o sinal de menos não existe. Em este caso todos os bits são 1 então o maxímo valor é 4 bilhões. 

### Programa 3 
Neste caso é uma mistura dos anteriores programas valor y é `unsigned` e o x é `signed`. O que acontence neste caso é a conversão implicita, quando um `int` é comparado com um `unsigned int` o `int` é convertido para um `unsigned int`.
Sendo asism o -1 vira 4 bilhões novamente, como no programa 2.