# Algoritmos de ordenação em C

Coleção acadêmica de algoritmos de ordenação com menus de demonstração, medição de tempo e testes automatizados.

## Arquitetura
```
main.c ──> bem_vindo.h, menu.h ──> <algoritmo>/opcao_<algoritmo>.h (menu e cenários)
                                    ├── <algoritmo>_sort.h   ← o algoritmo puro (testado)
                                    ├── imprimirTempo.h      ← medição de tempo
                                    └── saidas.h             ← impressão de resultados
pastas: bubble/ insert/ select/ shell/
tests/test_sort.c  inclui os *_sort.h e valida vetores ordenados
```
- Tudo em headers (`.h`) incluídos pelo `main.c`, no estilo da disciplina.
- `imprimirTempo.h`, `saidas.h` e `opcao_*.h` são quase idênticos entre as pastas (cerca de 800 linhas cada). A duplicação é histórica.

## Comandos
```powershell
gcc -std=c11 -Wall -Wextra -Werror -fsanitize=address,undefined tests/test_sort.c -o test_sort; ./test_sort
gcc -std=c11 main.c -o ordenacao; ./ordenacao
```
Sanitizers (`-fsanitize`) não funcionam no MinGW do Windows: use WSL ou MSYS2 (UCRT), ou rode sem eles localmente. Na dúvida, explique em vez de assumir.

## CI e deploy
- `ci.yml` compila e roda os testes com gcc, C11, `-Werror` e ASan/UBSan.
- Não há deploy.

## Regras
- Algoritmo novo: um `<nome>_sort.h` puro e um caso em `tests/test_sort.c`.
- Sem warnings (`-Werror`). Não versione `.exe`.
- Não refatore a duplicação histórica sem pedido. É material acadêmico preservado.
