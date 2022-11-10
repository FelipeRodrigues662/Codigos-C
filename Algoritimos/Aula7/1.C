#include <stdio.h>
#include <stdlib.h>
#include "BBT.h"

int main(){

    NO *ptrLista;
    inic(&ptrLista);
    int cod = 0;
   
    do
    {   
        printf("\n\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|            Funcoes             |             Codigos             |\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|         Inserir Inicio         |                1                |\n");
        printf("|          Remover Final         |                2                |\n");
        printf("|          Exibir Vogais         |                3                |\n");
        printf("|               Sair             |                4                |\n");
        printf("|--------------------------------|---------------------------------|\n");

        printf("Digite o Codigo da Funcao: ");
        scanf("%d", &cod);

        switch (cod){
            

            case 1: 
                inserirInicio(&ptrLista);
            break;

            case 2:
                removerFim(&ptrLista);
            break;

            case 3:
                exibir(ptrLista);
            break;

            case 4:
                printf("Voce esta saindo");
                desalocarNO(ptrLista);
            break;
    
            default:
                printf("Codigo Invalido");
            break;
        }
    }while (cod != 4);
    
    return 0;
}