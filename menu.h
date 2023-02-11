#include <stdio.h>
#include <stdlib.h>
#include "insert/opcao_insert.h"
#include "bubble/opcao_bubble.h"
#include "select/opcao_select.h"
#include "shell/opcao_shell.h"

int menu_tamanhos();

char menu_opcoes();

void opcaoBubble();

void opcaoSelect();

void opcaoShell();

void opcaoInsert()
{
    int tamanho;
    char valor;

    system("cls||clear");

    valor = menu_opcoes();

    switch (valor)
    {
    case 'r':
        system("cls||clear");
        tamanho = menu_tamanhos();
        randomicoI(&tamanho);
        break;

    case 'c':
        system("cls||clear");
        tamanho = menu_tamanhos();
        crescenteI(&tamanho);
        break;

    case 'd':
        system("cls||clear");
        tamanho = menu_tamanhos();
        decrescenteI(&tamanho);
        break;

    case 's':
        system("cls||clear");
        printf("Volte sempre :) ...");
        exit(1);
        break;

    default:
        system("cls||clear");
        printf("Opcao Invalida, tente novamente!\n");
        system("pause");
        break;
    }
}

void opcaoBubble()
{
    int tamanho;
    char valor;

    system("cls||clear");

    valor = menu_opcoes();

    switch (valor)
    {
    case 'r':
        system("cls||clear");
        tamanho = menu_tamanhos();
        randomicoB(&tamanho);
        break;

    case 'c':
        system("cls||clear");
        tamanho = menu_tamanhos();
        crescenteB(&tamanho);
        break;

    case 'd':
        system("cls||clear");
        tamanho = menu_tamanhos();
        decrescenteB(&tamanho);
        break;

    case 's':
        system("cls||clear");
        printf("Volte sempre :) ...");
        exit(1);
        break;

    default:
        system("cls||clear");
        printf("Opcao Invalida, tente novamente!\n");
        system("pause");
        break;
    }
}

void opcaoSelect()
{
    int tamanho;
    char valor;

    system("cls||clear");

    valor = menu_opcoes();

    switch (valor)
    {
    case 'r':
        system("cls||clear");
        tamanho = menu_tamanhos();
        randomicoS(&tamanho);
        break;

    case 'c':
        system("cls||clear");
        tamanho = menu_tamanhos();
        crescenteS(&tamanho);
        break;

    case 'd':
        system("cls||clear");
        tamanho = menu_tamanhos();
        decrescenteS(&tamanho);
        break;

    case 's':
        system("cls||clear");
        printf("Volte sempre :) ...");
        exit(1);
        break;

    default:
        system("cls||clear");
        printf("Opcao Invalida, tente novamente!\n");
        system("pause");
        break;
    }
}

void opcaoShell()
{
    int tamanho;
    char valor;

    system("cls||clear");

    valor = menu_opcoes();

    switch (valor)
    {
    case 'r':
        system("cls||clear");
        tamanho = menu_tamanhos();
        randomicoSh(&tamanho);
        break;

    case 'c':
        system("cls||clear");
        tamanho = menu_tamanhos();
        crescenteSh(&tamanho);
        break;

    case 'd':
        system("cls||clear");
        tamanho = menu_tamanhos();
        decrescenteSh(&tamanho);
        break;

    case 's':
        system("cls||clear");
        printf("Volte sempre :) ...");
        exit(1);
        break;

    default:
        system("cls||clear");
        printf("Opcao Invalida, tente novamente!\n");
        system("pause");
        break;
    }
}

char menu_opcoes()
{
    char valor;
    printf("########## OPCOES DE INSERTNSORT ##########\n");
    printf("'r'- Randomicos;\n");
    printf("'c'- Numeros crescentes;\n");
    printf("'d'- Numeros decrescentes;\n");
    printf("'s' - Sair;\n");
    printf("\nDigite a sua opcao: \n");
    scanf("%c", &valor);
    getchar();

    return valor;
}

int menu_tamanhos()
{
    int i;

    printf("########## INSTANCIA DE TAMANHOS ##########\n");
    printf("1 - 10;\n");
    printf("2 - 100;\n");
    printf("3 - 1000;\n");
    printf("4 - 10000;\n");
    printf("5 - 100000;\n");
    printf("6 - 1000000;\n");
    printf("0 - Sair;\n");
    printf("\nDigite a sua opcao: \n");
    scanf("%i", &i);
    getchar();

    return i;
}