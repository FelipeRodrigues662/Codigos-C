#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BBT.h"

int main(){

    NO *ptrLista;
    inic(&ptrLista);

    int cod = 0;
    char element;


    do
    {   
        printf("\n\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|            Funcoes             |             Codigos             |\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|         Inserir Inicio         |                1                |\n");
        printf("|         Remover Inicio         |                2                |\n");
        printf("|        Exibir Elementos        |                3                |\n");
        printf("|       Remover Especifico       |                4                |\n");
        printf("|          Remover Final         |                5                |\n");
        printf("|          Inserir Final         |                6                |\n");
        printf("|               Sair             |                7                |\n");
        printf("|--------------------------------|---------------------------------|\n");

        printf("Digite o Codigo da Função: ");
        scanf("%d", &cod);

        switch (cod){
            case 1:
                printf("\nINFORME UM CARACTER:\n");
                fflush(stdin);
                scanf("%c", &element);
                fflush(stdin);
                inserirIni(&ptrLista, element);
            break;
                
            case 2:
                fflush(stdin);
                removerIni(&ptrLista);
                fflush(stdin);
            break;

            case 3:
                printf("\nEXIBINDO ELEMENTOS:\n");
                fflush(stdin);
                exibindo(&ptrLista);
                fflush(stdin);
            break;

            case 4:
                fflush(stdin);
                removerNoEspecifico(&ptrLista);
            break;

            case 5:
                printf("\nINFORME UM CARACTER:\n");
                fflush(stdin);
                scanf("%c", &element);
                fflush(stdin);
                removerFim(&ptrLista);
                fflush(stdin);
            break;

            case 6:
                printf("\nINFORME UM CARACTER:\n");
                fflush(stdin);
                scanf("%c", &element);
                fflush(stdin);
                inserirFim(&ptrLista, element);
                fflush(stdin);
            break;

            case 7:
                printf("SAINDO E APAGANDO NOS..\n");
                desalocandoNo(ptrLista);
            break;
        
            default:
                printf("Codigo Invalido");
            break;
        }
    }while (cod != 7);
    
    return 0;
}