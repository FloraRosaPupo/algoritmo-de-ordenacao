#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "shell_sort.h"
#include "imprimirTempo.h"
#include "saidas.h"

void randomicoSh(int *n)
{
    int i, *v;

    FILE *arq;
    int result;

    switch (*n)
    {
    case 1:
        system("cls||clear");

        double time1 = 0.0; // armazena o tempo de excusao

        clock_t begin1 = clock(); // dispara o clock

        v = (int *)malloc(10 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradarandom10.txt", "wt"); // abre o arquivo

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 10\n");
        for (i = 0; i < 10; i++)
        {
            v[i] = 1 + rand();
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 10);

        imprimir_saida_randomicoSh(v, *n);

        clock_t end1 = clock(); // finaliza o clock
        time1 += (double)(end1 - begin1) / CLOCKS_PER_SEC;

        temprandomicoSh(time1, 1); // escreve no arquivo
        free(v);

        system("pause");

        break;

    case 2:
        system("cls||clear");
        double time2 = 0.0; // armazena o tempo de excusao

        clock_t begin2 = clock();

        v = (int *)malloc(100 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradarandom100.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 100\n");
        for (i = 0; i < 100; i++)
        {
            v[i] = 1 + (rand() % 1000);
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 100);

        imprimir_saida_randomicoSh(v, *n);

        clock_t end2 = clock();
        time2 += (double)(end2 - begin2) / CLOCKS_PER_SEC;

        temprandomicoSh(time2, 2);

        free(v);

        system("pause");

        break;

    case 3:
        system("cls||clear");
        double time3 = 0.0; // armazena o tempo de excusao

        clock_t begin3 = clock();

        v = (int *)malloc(1000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradarandom1000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 1000\n");

        for (i = 0; i < 1000; i++)
        {
            v[i] = 1 + (rand() + 10000);
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 1000);
        imprimir_saida_randomicoSh(v, 3);

        clock_t end3 = clock();
        time3 += (double)(end3 - begin3) / CLOCKS_PER_SEC;

        temprandomicoSh(time3, *n);

        free(v);
        system("pause");

        break;

    case 4:
        system("cls||clear");
        double time4 = 0.0; // armazena o tempo de excusao

        clock_t begin4 = clock();

        v = (int *)malloc(10000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradarandom10000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 100000\n");

        for (i = 0; i < 10000; i++)
        {
            v[i] = 1 + (rand() % 100000);
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 10000);
        imprimir_saida_randomicoSh(v, 4);

        clock_t end4 = clock();
        time4 += (double)(end4 - begin4) / CLOCKS_PER_SEC;

        temprandomicoSh(time4, *n);
        free(v);

        system("pause");

        break;

    case 5:
        system("cls||clear");
        double time5 = 0.0; // armazena o tempo de excusao
        clock_t begin5 = clock();

        v = (int *)malloc(100000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradarandom100000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 100000\n");
        for (i = 0; i < 100000; i++)
        {
            v[i] = 1 + (rand() % 1000000);
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 100000);

        imprimir_saida_randomicoSh(v, 5);

        clock_t end5 = clock();
        time5 += (double)(end5 - begin5) / CLOCKS_PER_SEC;

        temprandomicoSh(time5, *n);

        free(v);

        system("pause");

        break;

    case 6:
        system("cls||clear");
        double time6 = 0.0; // armazena o tempo de excusao

        clock_t begin6 = clock();

        v = (int *)malloc(1000000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradarandom1000000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 1000000\n");

        for (i = 0; i < 1000000; i++)
        {
            v[i] = 1 + (rand() % 10000000);
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        *v = shellsort(v, 1000000);
        imprimir_saida_randomicoSh(v, 6);

        clock_t end6 = clock();
        time6 += (double)(end6 - begin6) / CLOCKS_PER_SEC;

        temprandomicoSh(time6, *n);

        free(v);
        system("pause");

        break;

    case 0:
        system("cls||clear");
        exit(1);
        break;
    default:
        system("cls||clear");
        printf("Opcao Invalida, tente novamente!\n");
        break;
    }

    fclose(arq);
}

void crescenteSh(int *n)
{
    int i, *v;

    FILE *arq;
    int result;

    switch (*n)
    {
    case 1:
        system("cls||clear");

        double time1 = 0.0; // armazena o tempo de excusao

        clock_t begin1 = clock();

        v = (int *)malloc(10 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradacrescente10.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 10\n");
        for (i = 0; i < 10; i++)
        {
            v[i] = i + 1;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 10);

        imprimir_saida_crescenteSh(v, 1);

        clock_t end1 = clock();
        time1 += (double)(end1 - begin1) / CLOCKS_PER_SEC;

        tempcrescenteSh(time1, 1);
        free(v);

        break;

    case 2:
        system("cls||clear");
        double time2 = 0.0; // armazena o tempo de excusao

        clock_t begin2 = clock();

        v = (int *)malloc(100 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradacrescente100.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 100\n");
        for (i = 0; i < 100; i++)
        {
            v[i] = i + 1;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 100);

        imprimir_saida_crescenteSh(v, 2);

        clock_t end2 = clock();
        time2 += (double)(end2 - begin2) / CLOCKS_PER_SEC;

        tempcrescenteSh(time2, 2);

        free(v);
        system("pause");

        break;

    case 3:
        system("cls||clear");
        double time3 = 0.0; // armazena o tempo de excusao

        clock_t begin3 = clock();

        v = (int *)malloc(1000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradacrescente1000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 1000\n");

        for (i = 0; i < 1000; i++)
        {
            v[i] = i + 1;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 1000);

        imprimir_saida_crescenteSh(v, 3);

        clock_t end3 = clock();
        time3 += (double)(end3 - begin3) / CLOCKS_PER_SEC;

        tempcrescenteSh(time3, 3);

        free(v);
        system("pause");

        break;

    case 4:
        system("cls||clear");
        double time4 = 0.0; // armazena o tempo de excusao

        clock_t begin4 = clock();

        v = (int *)malloc(10000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradacrescente10000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 10000\n");

        for (i = 0; i < 10000; i++)
        {
            v[i] = i + 1;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 10000);
        imprimir_saida_crescenteSh(v, 4);

        clock_t end4 = clock();
        time4 += (double)(end4 - begin4) / CLOCKS_PER_SEC;

        tempcrescenteSh(time4, 4);

        free(v);
        system("pause");

        break;
    case 5:
        system("cls||clear");
        double time5 = 0.0; // armazena o tempo de excusao

        clock_t begin5 = clock();

        v = (int *)malloc(100000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradacrescente100000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 100000\n");

        for (i = 0; i < 100000; i++)
        {
            v[i] = i + 1;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        *v = shellsort(v, 100000);
        imprimir_saida_crescenteSh(v, 5);

        clock_t end5 = clock();
        time5 += (double)(end5 - begin5) / CLOCKS_PER_SEC;

        tempcrescenteSh(time5, 5);

        free(v);
        system("pause");

        break;

    case 6:
        system("cls||clear");
        double time6 = 0.0; // armazena o tempo de excusao

        clock_t begin6 = clock();

        v = (int *)malloc(1000000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradacrescente1000000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 1000000\n");

        for (i = 0; i < 1000000; i++)
        {
            v[i] = i + 1;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 1000000);
        imprimir_saida_crescenteSh(v, 6);

        clock_t end6 = clock();
        time6 += (double)(end6 - begin6) / CLOCKS_PER_SEC;

        tempcrescenteSh(time6, 6);

        free(v);
        system("pause");

        break;

    case 0:
        system("cls||clear");
        exit(1);
        break;
    default:
        system("cls||clear");
        printf("Opcao Invalida, tente novamente!\n");
        break;
    }

    fclose(arq);
}

void decrescenteSh(int *n)
{
    int i, *v;

    FILE *arq;
    int result;

    switch (*n)
    {
    case 1:
        system("cls||clear");
        double time1 = 0.0; // armazena o tempo de excusao

        clock_t begin1 = clock();

        v = (int *)malloc(10 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradadecrescente10.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 10\n");

        for (i = 10; i >= 0; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = (v, 10);
        imprimir_saida_decrescenteSh(v, 1);

        clock_t end1 = clock();
        time1 += (double)(end1 - begin1) / CLOCKS_PER_SEC;

        tempdecrescenteSh(time1, 1);

        free(v);
        system("pause");

        break;

    case 2:
        system("cls||clear");
        double time2 = 0.0; // armazena o tempo de excusao

        clock_t begin2 = clock();

        v = (int *)malloc(100 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradadecrescente100.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 100\n");
        for (i = 100; i >= 0; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n", v[i]);
             if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 100);
        imprimir_saida_decrescenteSh(v, 2);

        clock_t end2 = clock();
        time2 += (double)(end2 - begin2) / CLOCKS_PER_SEC;

        tempdecrescenteSh(time2, 2);

        free(v);
        system("pause");

        break;

    case 3:
        system("cls||clear");
        double time3 = 0.0; // armazena o tempo de excusao

        clock_t begin3 = clock();

        v = (int *)malloc(1000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradadecrescente1000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 1000\n");

        for (i = 1000; i >= 0; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 1000);
        imprimir_saida_decrescenteSh(v, 3);

        clock_t end3 = clock();
        time3 += (double)(end3 - begin3) / CLOCKS_PER_SEC;

        tempdecrescenteSh(time3, 3);

        free(v);
        system("pause");

        break;

    case 4:
        system("cls||clear");
        double time4 = 0.0; // armazena o tempo de excusao

        clock_t begin4 = clock();

        v = (int *)malloc(10000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradadecrescente10000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 10000\n");

        for (i = 10000; i >= 0; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 10000);
        imprimir_saida_decrescenteSh(v, 4);

        clock_t end4 = clock();
        time4 += (double)(end4 - begin4) / CLOCKS_PER_SEC;

        tempdecrescenteSh(time4, 4);

        free(v);
        system("pause");

        break;

    case 5:
        system("cls||clear");
        double time5 = 0.0; // armazena o tempo de excusao

        clock_t begin5 = clock();

        v = (int *)malloc(100000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradadecrescente100000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 100000\n");

        for (i = 10000; i >= 0; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        *v = shellsort(v, 100000);

        imprimir_saida_decrescenteSh(v, 5);

        clock_t end5 = clock();
        time5 += (double)(end5 - begin5) / CLOCKS_PER_SEC;

        tempdecrescenteSh(time5, 5);
        free(v);
        system("pause");

        break;

    case 6:
        system("cls||clear");
        double time6 = 0.0; // armazena o tempo de excusao

        clock_t begin6 = clock();

        v = (int *)malloc(1000000 * sizeof(int));

        arq = fopen("shell/arquivodeentrada/entradadecrescente1000000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "Tamanho: 1000000\n");

        for (i = 1000000; i >= 0; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        *v = shellsort(v, 1000000);
        imprimir_saida_decrescenteSh(v, 6);

        clock_t end6 = clock();
        time6 += (double)(end6 - begin6) / CLOCKS_PER_SEC;

        tempdecrescenteSh(time6, 6);

        free(v);
        system("pause");

        break;

    case 0:
        system("cls||clear");
        exit(1);
        break;
    default:
        system("cls||clear");
        printf("Opcao Invalida, tente novamente!\n");
        break;
    }

    fclose(arq);
}
