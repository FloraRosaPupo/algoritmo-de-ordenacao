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


## Stack e bibliotecas

C e GCC com sanitizadores.


## Funcionalidades

- Bubble sort.
- insertion/selection sort.
- Shell sort e menus de estudo.


## Organização e manutenção

Os algoritmos já são agrupados por comportamento em bubble/insert/select/shell. As rotinas permanecem separadas dos menus históricos. Não foi imposta uma arquitetura de aplicação sobre funções de ordenação.

Veja [a revisão de desenvolvimento](docs/REVISAO.md) para decisões, testes e limites, e [o guia de contribuição](CONTRIBUTING.md) para o fluxo de manutenção.
