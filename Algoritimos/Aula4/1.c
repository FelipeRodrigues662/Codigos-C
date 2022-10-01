#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BBT.h"

int main(){

    No *ptrLista;

    inic(&ptrLista);
    int cod = 0;

    do
    {   
        printf("\n\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|            Funcoes             |             Codigos             |\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|        Inserir Elemento        |                1                |\n");
        printf("|                                |                2                |\n");
        printf("|                                |                3                |\n");
        printf("|             Sair               |                4                |\n");
        printf("|--------------------------------|---------------------------------|\n");

        printf("Digite o Codigo da Função: ");
        scanf("%d", &cod);

        switch (cod){
            case 1:
                inserirInicio(&ptrLista, 'C');
                inserirInicio(&ptrLista, 'B');
                inserirInicio(&ptrLista, 'A');
            break;
                
            case 2:
               
            break;

            case 3:
                
            break;

            case 4:
                printf("Seu programa vai fechar");
            break;
        
            default:
                printf("Codigo Invalido");
            break;
        }
    }while (cod != 4);
    
    return 0;
}