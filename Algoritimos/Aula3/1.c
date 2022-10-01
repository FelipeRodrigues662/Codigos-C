#include <stdio.h>
#include <stdlib.h>
#include "BBT.h"

int main(){

    No *ptrLista;
    int cod = 0;
    char letra;

    ptrLista = inic(ptrLista);
    
    do
    {   
        printf("\n\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|            Funcoes             |             Codigos             |\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|        Inserir Elemento        |                1                |\n");
        printf("|    Remover Todos Elemetos      |                2                |\n");
        printf("| Imprimir a posicao das vogais  |                3                |\n");
        printf("|             Sair               |                4                |\n");
        printf("|--------------------------------|---------------------------------|\n");

        printf("Digite o Codigo da Função: ");
        scanf("%d", &cod);

        switch (cod){
            case 1:
                inserirInicio(ptrLista);
            break;
                
            case 2:
                rmTodosElementos(ptrLista);
            break;

            case 3:
                procurarVogais(ptrLista);
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