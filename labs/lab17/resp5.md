# Símbolos do módulo objeto arq1.o

- **Exportados (T, B):** 
    - T - `g` 
    - B - `buff` 
- **Importados/Indefinidos (U):** 
    - `f` 
    - `i`
    - `malloc`
    - `strcat`
    - `strcpy` 
    - `strlen`
- **Não Exportados (t, b):**
    - b - `k`

### Resultado do printf
O `printf` imprime **0** porque existem duas variáveis `k` distintas e independentes:

- **O `k` de `arq1.c`:** Foi declarado como `static`, o que o torna privado (local) para aquele arquivo. A função `g()` modifica apenas este `k`.
- **O `k` do `main`:** É uma variável global diferente. O `printf` do `main` enxerga apenas este `k`, que nunca foi alterado pela função `g()` e mantém seu valor inicial de **0**.