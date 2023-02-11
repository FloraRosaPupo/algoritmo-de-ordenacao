#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void imprimir_saida_randomicoB(int saida[], int opc)
{
    int i;

    FILE *arq;
    int result;

    system("cls||clear");

    switch (opc)
    {
    case 1:
        system("cls||clear");
        arq = fopen("bubble/arquivodesaida/saidarandomico10.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidarandomico100.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidarandomico1000.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidarandomico10000.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidarandomico100000.txt", "wt");

        if (arq == NULL) // Se n�o conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }


        /*teste da saida 5 
        for(i = 0; i < 100000; i++)
        {
            printf("%i\n", saida[i]);
        }
        system("pause");
        */

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
        arq = fopen("bubble/arquivodesaida/saidarandomico1000000.txt", "wt");

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

void imprimir_saida_crescenteB(int saida[], int opc)
{
    int i;

    FILE *arq;
    int result;
    switch (opc)
    {
    case 1:
        system("cls||clear");
        arq = fopen("bubble/arquivodesaida/saidacrescente10.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidacrescente100.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidacrescente1000.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidacrescente10000.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidacrescente100000.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidacrescente1000000.txt", "wt");

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

void imprimir_saida_decrescenteB(int saida[], int opc)
{
    int i;

    FILE *arq;
    int result;
    switch (opc)
    {
    case 1:
        system("cls||clear");
        arq = fopen("bubble/arquivodesaida/saidadecrescente10.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidadecrescente100.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidadecrescente1000.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidadecrescente10000.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidadecrescente100000.txt", "wt");

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
        arq = fopen("bubble/arquivodesaida/saidadecrescente1000000.txt", "wt");

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
