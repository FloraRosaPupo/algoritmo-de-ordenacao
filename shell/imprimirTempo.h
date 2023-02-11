#include <stdio.h>
#include <stdlib.h>
#include "math.h"

void temprandomicoSh(double time, int opc)
{
    FILE *arq;

    switch (opc)
    {
    case 1:
        arq = fopen("shell/tempoexecucao/tempodeexecucaorandomico10.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 2:
        arq = fopen("shell/tempoexecucao/tempodeexecucaorandomico100.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 3:
        arq = fopen("shell/tempoexecucao/tempodeexecucaorandomico1000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 4:
        arq = fopen("shell/tempoexecucao/tempodeexecucaorandomico10000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 5:
        arq = fopen("shell/tempoexecucao/tempodeexecucaorandomico100000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 6:
        arq = fopen("shell/tempoexecucao/tempodeexecucaorandomico1000000.txt", "wt");

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


void tempcrescenteSh(double time, int opc)
{
    FILE *arq;

    switch (opc)
    {
    case 1:
        arq = fopen("shell/tempoexecucao/tempodeexecucaocrescente10.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 2:
        arq = fopen("shell/tempoexecucao/tempodeexecucaocrescente100.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 3:
        arq = fopen("shell/tempoexecucao/tempodeexecucaocrescente1000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 4:
        arq = fopen("shell/tempoexecucao/tempodeexecucaocrescente10000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 5:
        arq = fopen("shell/tempoexecucao/tempodeexecucaocrescente100000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 6:
        arq = fopen("shell/tempoexecucao/tempodeexecucaocrescente1000000.txt", "wt");

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


void tempdecrescenteSh(double time, int opc)
{
    FILE *arq;

    switch (opc)
    {
    case 1:
        arq = fopen("shell/tempoexecucao/tempodeexecucaodecrescente10.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 2:
        arq = fopen("shell/tempoexecucao/tempodeexecucaodecrescente100.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 3:
        arq = fopen("shell/tempoexecucao/tempodeexecucaodecrescente1000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 4:
        arq = fopen("shell/tempoexecucao/tempodeexecucaodecrescente10000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 5:
        arq = fopen("shell/tempoexecucao/tempodeexecucaodecrescente100000.txt", "wt");

        if (arq == NULL)
        {
            printf("Erro ao criar arquivo\n");
            return;
        }

        fprintf(arq, "O tempo de execucao eh de: %.5f segundos", time);
        break;
    case 6:
        arq = fopen("shell/tempoexecucao/tempodeexecucaodecrescente1000000.txt", "wt");

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