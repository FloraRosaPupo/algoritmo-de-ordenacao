# Algoritmos de ordenação

Estudo em C de Bubble Sort, Insertion Sort, Selection Sort e Shell Sort.
Cada algoritmo tem uma pasta própria, com rotina de ordenação e demonstrações de tempo de execução.

## Compilar e testar as rotinas
Requer GCC ou compilador C11 compatível:
```sh
gcc -std=c11 -Wall -Wextra -Werror tests/test_sort.c -o test_sort
./test_sort
```
No Windows, execute `test_sort.exe`. Os testes cobrem duplicados, negativos, vetor vazio, vetor unitário e o ponteiro retornado. A CI também executa os sanitizadores de memória e comportamento indefinido.

## Aplicação interativa
`main.c` e os menus históricos incluem comandos de terminal específicos de Windows. Os testes das rotinas são independentes desses menus.

## Licença
Não há licença de distribuição definida neste repositório.
