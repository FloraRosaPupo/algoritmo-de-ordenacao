#include <stdio.h>
#include <stdlib.h>
#include "bem_vindo.h"
#include "menu.h"

void main()
{
    int opc;

    system("cls||clear");

    do
    {
        opc = bemVindo();

        switch (opc)
        {
        case 1:
            system("cls||clear"); 
            opcaoInsert();
            break;
        case 2:
            system("cls||clear");
            opcaoBubble();
            break;
            
        case 3: 
            system("cls||clear");
            opcaoSelect();
            break;
        case 4: 
            system("cls||clear");
            opcaoShell();
            break;
        case 5:
            system("cls||clear");

            printf("Universidade Federal de Vicosa\n");
            printf("SIN 213 - PROJETO DE ALGORITMO\n");
            printf("Professor: Pedro Moises de Sousa\n");
            printf("--------Desenvolvedora--------\n");
            printf("Flora Rosa Pupo - 6956\n\n");
            system("pause");
            break;

        case 0:
            printf("Volte sempre :) ...");
            exit(1);
            break;

        default:
            system("cls||clear");
            printf("Opcao Invalida, tente novamente!\n");
            system("pause");
            break;
        }
    } while (opc != 0);
}
