#include<stdio.h>
#include<stdlib.h>

int bemVindo()
{
    char opc;

    system("cls||clear");

    printf("##### ALGORITMOS DE ORDENACAO #####\n");
    printf("########## MENU DE OPCOES ##########\n");
    printf("1 - Iniciar Insert Sort;\n");
    printf("2 - Iniciar Bubble Sort;\n");
    printf("3 - Iniciar Selection Sort;\n");
    printf("4 - Iniciar Shell Sort;\n");
    printf("5 - Conheca a desenvolvedora;\n"); 
    printf("0 - Sair;\n");
    printf("Digite a sua opcao: \n");
    scanf("%i", &opc);
    getchar();


    return opc;
}
