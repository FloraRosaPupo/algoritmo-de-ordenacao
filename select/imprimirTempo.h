#include <stdio.h>
#include <stdlib.h>
#include "math.h"

void temprandomicoS(double time, int opc)
{
    FILE *arq;

    switch (opc)
    {
    case 1:
        arq = fopen("select/tempoexecucao/tempodeexecucaorandomico10.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 2:
        arq = fopen("select/tempoexecucao/tempodeexecucaorandomico100.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 3:
        arq = fopen("select/tempoexecucao/tempodeexecucaorandomico1000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 4:
        arq = fopen("select/tempoexecucao/tempodeexecucaorandomico10000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 5:
        arq = fopen("select/tempoexecucao/tempodeexecucaorandomico100000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 6:
        arq = fopen("select/tempoexecucao/tempodeexecucaorandomico1000000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    default:
        break;
    }

    fclose(arq);

    printf("-----------------------------------------------\n");
    printf("\n\n\nVerifique o arquivo de entrada e saida...\n\n\n");
    
}


void tempcrescenteS(double time, int opc)
{
    FILE *arq;

    switch (opc)
    {
    case 1:
        arq = fopen("select/tempoexecucao/tempodeexecucaocrescente10.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 2:
        arq = fopen("select/tempoexecucao/tempodeexecucaocrescente100.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 3:
        arq = fopen("select/tempoexecucao/tempodeexecucaocrescente1000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 4:
        arq = fopen("select/tempoexecucao/tempodeexecucaocrescente10000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 5:
        arq = fopen("select/tempoexecucao/tempodeexecucaocrescente100000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 6:
        arq = fopen("select/tempoexecucao/tempodeexecucaocrescente1000000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    default:
        break;
    }

    fclose(arq);

    printf("-----------------------------------------------\n");
    printf("\n\n\nVerifique o arquivo de entrada e saida...\n\n\n");
}


void tempdecrescenteS(double time, int opc)
{
    FILE *arq;

    switch (opc)
    {
    case 1:
        arq = fopen("select/tempoexecucao/tempodeexecucaodecrescente10.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 2:
        arq = fopen("select/tempoexecucao/tempodeexecucaodecrescente100.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 3:
        arq = fopen("select/tempoexecucao/tempodeexecucaodecrescente1000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 4:
        arq = fopen("select/tempoexecucao/tempodeexecucaodecrescente10000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 5:
        arq = fopen("select/tempoexecucao/tempodeexecucaodecrescente100000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 6:
        arq = fopen("select/tempoexecucao/tempodeexecucaodecrescente1000000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    default:
        break;
    }

    fclose(arq);

    printf("-----------------------------------------------\n");
    printf("\n\n\nVerifique o arquivo de entrada e saida...\n\n\n");
}