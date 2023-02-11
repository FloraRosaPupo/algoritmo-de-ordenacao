#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void imprimir_saida_randomicoS(int saida[], int opc)
{
    int i;

    FILE *arq;
    int result;

    system("cls||clear");

    switch (opc)
    {
    case 1:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidarandomico10.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 10);
        for (i = 0; i < 10; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;

    case 2:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidarandomico100.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 100);
        for (i = 0; i < 100; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;

    case 3:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidarandomico1000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 1000);
        for (i = 0; i < 1000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        break;

    case 4:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidarandomico10000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 10000);
        for (i = 0; i < 10000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        break;  

    case 5:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidarandomico100000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }


        fprintf(arq, "%i\n", 100000);
        for (i = 0; i < 100000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);

            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;

    case 6:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidarandomico1000000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 1000000);
        for (i = 0; i < 1000000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;
    default:
        exit(1);
        break;
    }

    fclose(arq);
}

void imprimir_saida_crescenteS(int saida[], int opc)
{
    int i;

    FILE *arq;
    int result;
    switch (opc)
    {
    case 1:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidacrescente10.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 10);
        for (i = 0; i < 10; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;

    case 2:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidacrescente100.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 100);
        for (i = 0; i < 100; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;

    case 3:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidacrescente1000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 1000);
        for (i = 0; i < 1000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        break;

    case 4:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidacrescente10000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 10000);
        for (i = 0; i < 10000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        break;

    case 5:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidacrescente100000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 100000);
        for (i = 0; i < 100000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;

    case 6:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidacrescente1000000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 1000000);
        for (i = 0; i < 1000000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;
    }

    fclose(arq);
}

void imprimir_saida_decrescenteS(int saida[], int opc)
{
    int i;

    FILE *arq;
    int result;
    switch (opc)
    {
    case 1:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidadecrescente10.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 10);
        for (i = 0; i < 10; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;

    case 2:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidadecrescente100.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 100);
        for (i = 0; i < 100; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;

    case 3:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidadecrescente1000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 1000);
        for (i = 0; i < 1000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        break;

    case 4:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidadecrescente10000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 10000);
        for (i = 0; i < 10000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }

        break;

    case 5:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidadecrescente100000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 100000);
        for (i = 0; i < 100000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;

    case 6:
        system("cls||clear");
        arq = fopen("select/arquivodesaida/saidadecrescente1000000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq, "%i\n", 1000000);
        for (i = 0; i < 1000000; i++)
        {
            result = fprintf(arq, "%i\n", saida[i]);
            if (result == EOF)
            {
                printf("Erro na Gravacao\n");
            }
        }
        break;
    }

    fclose(arq);
}
