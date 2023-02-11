#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"insert_sort.h"
#include"imprimirTempo.h"
#include"saidas.h"

void randomicoI(int *n){
    int i, *v;

    FILE *arq;
    int result;

    switch (*n)
    {
    case 1:
        system("cls||clear");

        double time1 = 0.0;//armazena o tempo de excusao

        clock_t begin1 = clock();//dispara o clock

        v = (int *)malloc(10 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradarandom10.txt", "wt");//abre o arquivo

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 10\n");
        for (i = 0; i < 10; i++)
        {
            v[i] =  1+ (rand()%100);
            result = fprintf(arq, "%i\n",v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }

        }

        *v = insertsort(v, 10);

        imprimir_saida_randomicoI(v, *n);

        clock_t end1= clock();//finaliza o clock
        time1 += (double)(end1- begin1)/CLOCKS_PER_SEC;

        temprandomicoI(time1, 1);//escreve no arquivo
        free(v);

        system("pause");
        break;

    case 2:
        system("cls||clear");
        double time2 = 0.0;//armazena o tempo de excusao

        clock_t begin2 = clock();

        v = (int *)malloc(100 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradarandom100.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 100\n");
        for (i = 0; i < 100; i++)
        {
            v[i] =  1 + (rand()%1000);
            result = fprintf(arq, "%i\n",v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }

        }

        *v = insertsort(v, 100);

        imprimir_saida_randomicoI(v, *n);

        clock_t end2 = clock();
        time2 += (double)(end2- begin2)/CLOCKS_PER_SEC;

        temprandomicoI(time2, 2);

        free(v);
        system("pause");
        break;

    case 3:
        system("cls||clear");
        double time3 = 0.0;//armazena o tempo de excusao

        clock_t begin3 = clock();

        v = (int *)malloc(1000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradarandom1000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 1000\n");

        for (i = 0; i < 1000; i++)
        {
            v[i] = 1 +(rand()+10000);
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }

        *v = insertsort(v, 1000);
        imprimir_saida_randomicoI(v,  3);


        clock_t end3 = clock();
        time3 += (double)(end3- begin3)/CLOCKS_PER_SEC;

        temprandomicoI(time3, *n);

        free(v);
        system("pause");
        break;

    case 4:
        system("cls||clear");
        double time4 = 0.0;//armazena o tempo de excusao

        clock_t begin4 = clock();

        v = (int *)malloc(10000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradarandom10000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 100000\n");

        for (i = 0; i < 10000; i++)
        {
            v[i] = 1+ (rand()%100000);
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }

        *v = insertsort(v, 10000);
        imprimir_saida_randomicoI(v, 4);

        clock_t end4 = clock();
        time4 += (double)(end4- begin4)/CLOCKS_PER_SEC;

        temprandomicoI(time4, *n);
        free(v);
        system("pause");
        break;

    case 5:
        system("cls||clear");
        double time5 = 0.0;//armazena o tempo de excusao
        clock_t begin5 = clock();

        v = (int *)malloc(100000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradarandom100000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 100000\n");
        for (i = 0; i < 100000; i++)
        {
            v[i] = 1 + (rand() % 1000000);
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }

        *v = insertsort(v, 100000);

        imprimir_saida_randomicoI(v, 5);

        clock_t end5 = clock();
        time5 += (double)(end5- begin5)/CLOCKS_PER_SEC;

        temprandomicoI(time5, *n);

        free(v);

        system("pause");
        break;

    case 6:
        system("cls||clear");
        double time6 = 0.0;//armazena o tempo de excusao

        clock_t begin6 = clock();

         v = (int *)malloc(1000000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradarandom1000000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 1000000\n");

        for (i = 0; i < 1000000; i++)
        {
            v[i] = 1+ (rand()%10000000);
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }
        *v = insertsort(v, 1000000);
        imprimir_saida_randomicoI(v, 6);

        clock_t end6 = clock();
        time6 += (double)(end6- begin6)/CLOCKS_PER_SEC;

        temprandomicoI(time6, *n);

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


void crescenteI(int *n){
    int i, *v;


    FILE *arq;
    int result;


    switch (*n)
    {
    case 1:
        system("cls||clear");

        double time1 = 0.0;//armazena o tempo de excusao

        clock_t begin1 = clock();

        v = (int *)malloc(10 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradacrescente10.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 10\n");
        for (i = 0; i < 10; i++)
        {
            v[i] = i+1;
            result = fprintf(arq, "%i\n",v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }

        }

        *v = insertsort(v, 10);

        imprimir_saida_crescenteI(v, 1);

        clock_t end1= clock();
        time1 += (double)(end1- begin1)/CLOCKS_PER_SEC;

        tempcrescenteI(time1, 1);
        free(v);

        system("pause");
        break;

    case 2:
        system("cls||clear");
        double time2 = 0.0;//armazena o tempo de excusao

        clock_t begin2 = clock();

        v = (int *)malloc(100 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradacrescente100.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 100\n");
        for (i = 0; i < 100; i++)
        {
            v[i] =  i+1;
            result = fprintf(arq, "%i\n",v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }

        }

        *v =  insertsort(v, 100);

        imprimir_saida_crescenteI(v, 2);

        clock_t end2 = clock();
        time2 += (double)(end2- begin2)/CLOCKS_PER_SEC;

        tempcrescenteI(time2, 2);

        free(v);
        system("pause");
        break;

    case 3:
        system("cls||clear");
        double time3 = 0.0;//armazena o tempo de excusao

        clock_t begin3 = clock();

        v = (int *)malloc(1000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradacrescente1000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 1000\n");

        for (i = 0; i < 1000; i++)
        {
            v[i] = i+1;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }

        *v = insertsort(v, 1000);

        imprimir_saida_crescenteI(v, 3);

        clock_t end3 = clock();
        time3 += (double)(end3- begin3)/CLOCKS_PER_SEC;

        tempcrescenteI(time3, 3);

        free(v);
        system("pause");
        break;

    case 4:
        system("cls||clear");
        double time4 = 0.0;//armazena o tempo de excusao

        clock_t begin4 = clock();

        v = (int *)malloc(10000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradacrescente10000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 10000\n");

        for (i = 0; i < 10000; i++)
        {
            v[i] = i+1;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }

        *v = insertsort(v, 10000);
        imprimir_saida_crescenteI(v, 4);

        clock_t end4 = clock();
        time4 += (double)(end4- begin4)/CLOCKS_PER_SEC;

        tempcrescenteI(time4, 4);

        free(v);
        system("pause");
        break;
    case 5:
        system("cls||clear");
        double time5 = 0.0;//armazena o tempo de excusao

        clock_t begin5 = clock();

        v = (int *)malloc(100000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradacrescente100000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 100000\n");

        for (i = 0; i < 100000; i++)
        {
            v[i] = i+1;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }
        *v = insertsort(v, 100000);
        imprimir_saida_crescenteI(v, 5);

        clock_t end5 = clock();
        time5 += (double)(end5- begin5)/CLOCKS_PER_SEC;

        tempcrescenteI(time5, 5);

        free(v);
        system("pause");
        break;

    case 6:
        system("cls||clear");
        double time6 = 0.0;//armazena o tempo de excusao

        clock_t begin6 = clock();

         v = (int *)malloc(1000000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradacrescente1000000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 1000000\n");

        for (i = 0; i < 1000000; i++)
        {
            v[i] = i+1;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }
        *v = insertsort(v, 1000000);
        imprimir_saida_crescenteI(v, 6);

        clock_t end6 = clock();
        time6 += (double)(end6- begin6)/CLOCKS_PER_SEC;

        tempcrescenteI(time6, 6);

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

void decrescenteI(int *n){
    int i, *v;


    FILE *arq;
    int result;


    switch (*n)
    {
    case 1:
        system("cls||clear");
        double time1 = 0.0;//armazena o tempo de excusao

        clock_t begin1 = clock();

        v = (int *)malloc(10 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradadecrescente10.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 10\n");

        for (i = 10; i >= 0; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n",v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }

        }


        *v = insertsort(v, 10);
        imprimir_saida_decrescenteI(v, 1);

        clock_t end1= clock();
        time1 += (double)(end1- begin1)/CLOCKS_PER_SEC;

        tempdecrescenteI(time1, 1);

        free(v);
        system("pause");
        break;

    case 2:
        system("cls||clear");
        double time2 = 0.0;//armazena o tempo de excusao

        clock_t begin2 = clock();

        v = (int *)malloc(100 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradadecrescente100.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 100\n");
        for (i = 100; i >= 0; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n",v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }

        }

        *v = insertsort(v, 100);
        imprimir_saida_decrescenteI(v, 2);

        clock_t end2 = clock();
        time2 += (double)(end2- begin2)/CLOCKS_PER_SEC;

        tempdecrescenteI(time2, 2);

        free(v);
        
        system("pause");
        break;

    case 3:
        system("cls||clear");
        double time3 = 0.0;//armazena o tempo de excusao

        clock_t begin3 = clock();

        v = (int *)malloc(1000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradadecrescente1000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 1000\n");

        for (i = 1000; i >= 0; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }

        }

        *v = insertsort(v, 1000);
        imprimir_saida_decrescenteI(v, 3);

        clock_t end3 = clock();
        time3 += (double)(end3- begin3)/CLOCKS_PER_SEC;

        tempdecrescenteI(time3, 3);

        free(v);
        system("pause");
        break;

    case 4:
        system("cls||clear");
        double time4 = 0.0;//armazena o tempo de excusao

        clock_t begin4 = clock();

        v = (int *)malloc(10000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradadecrescente10000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 10000\n");

        for (i = 10000; i >= 0; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }

        *v = insertsort(v, 10000);
        imprimir_saida_decrescenteI(v, 4);

        clock_t end4 = clock();
        time4 += (double)(end4- begin4)/CLOCKS_PER_SEC;

        tempdecrescenteI(time4, 4);

        free(v);
        system("pause");
        break;

    case 5:
        system("cls||clear");
        double time5 = 0.0;//armazena o tempo de excusao

        clock_t begin5 = clock();

        v = (int *)malloc(100000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradadecrescente100000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 100000\n");

        for (i = 10000; i >=0  ; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }

        *v=insertsort(v, 100000);

        imprimir_saida_decrescenteI(v, 5);

        clock_t end5 = clock();
        time5 += (double)(end5- begin5)/CLOCKS_PER_SEC;

        tempdecrescenteI(time5, 5);
        free(v);
        system("pause");
        break;

    case 6:
        system("cls||clear");
        double time6 = 0.0;//armazena o tempo de excusao

        clock_t begin6 = clock();

         v = (int *)malloc(1000000 * sizeof(int));

        arq = fopen("insertion/arquivodeentrada/entradadecrescente1000000.txt", "wt");

        if (arq == NULL) // Se nào conseguiu criar
        {
            printf("Problemas na CRIACAO do arquivo\n");
            return;
        }

        fprintf(arq,"Tamanho: 1000000\n");

        for (i = 1000000; i >=0 ; i--)
        {
            v[i] = i;
            result = fprintf(arq, "%i\n", v[i]);
            if (result == EOF){
	            printf("Erro na Gravacao\n");
            }
        }
        *v = insertsort(v, 1000000);
        imprimir_saida_decrescenteI(v, 6);

        clock_t end6 = clock();
        time6 += (double)(end6- begin6)/CLOCKS_PER_SEC;

        tempdecrescenteI(time6, 6);

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
