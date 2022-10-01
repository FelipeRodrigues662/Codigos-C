#include <stdio.h>
#include <stdlib.h>
#include "BBT1.h"

int main(){

    No *ptrLista;
    int cod = 0;
    char letra;

    ptrLista = inic(ptrLista);
    
    do
    {   
        if(ptrLista == NULL){
            printf("\nNULL");
        }
        printf("\n\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|            Funcoes             |             Codigos             |\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|        Inserir Elemento        |                1                |\n");
        printf("|    Remover Todos Elemetos      |                2                |\n");
        printf("| Imprimir a posicao das vogais  |                3                |\n");
        printf("|             Sair               |                4                |\n");
        printf("|--------------------------------|---------------------------------|\n");

        printf("Digite o Codigo da Funcao: ");
        scanf("%d", &cod);

        switch (cod){
            case 1:
                inserirFinal(ptrLista);
            break;
                
            case 2:
                rmDiciplina(ptrLista);
            break;

            case 3:
                //exibirDiciplinas(ptrLista);
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