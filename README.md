# Algoritmos de Ordenação em C

## Descrição

Coleção acadêmica de algoritmos de ordenação em C, com rotinas separadas por algoritmo, menus históricos de demonstração e testes automatizados das funções de ordenação.

## Stack e bibliotecas

C e GCC com sanitizadores.

## Funcionalidades

- Bubble sort.
- Insertion/selection sort.
- Shell sort e menus de estudo.

## Licença

Não há uma licença de distribuição definida para este repositório. Nenhuma licença MIT, Apache ou equivalente é concedida por este README. As atribuições e os direitos dos materiais de terceiros permanecem preservados.

## Validação e limites

Retorno correto, negativos, duplicados, vetor vazio e unitário. O menu histórico Windows não é o alvo desta CI.

## Compilar e testar as rotinas
Requer GCC ou compilador C11 compatível:
```sh
gcc -std=c11 -Wall -Wextra -Werror tests/test_sort.c -o test_sort
./test_sort
```
No Windows, execute `test_sort.exe`. Os testes cobrem duplicados, negativos, vetor vazio, vetor unitário e o ponteiro retornado. A CI também executa os sanitizadores de memória e comportamento indefinido.

## Aplicação interativa
`main.c` e os menus históricos incluem comandos de terminal específicos de Windows. Os testes das rotinas são independentes desses menus.

## Organização e manutenção

Os algoritmos já são agrupados por comportamento em bubble/insert/select/shell. As rotinas permanecem separadas dos menus históricos. Não foi imposta uma arquitetura de aplicação sobre funções de ordenação.

Veja [a revisão de desenvolvimento](docs/REVISAO.md) para decisões, testes e limites, e [o guia de contribuição](CONTRIBUTING.md) para o fluxo de manutenção.
