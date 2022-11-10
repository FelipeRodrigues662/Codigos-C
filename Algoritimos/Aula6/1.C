#include <stdio.h>
#include <stdlib.h>
#include "BBT.h"

int main(){

    NO *ptrLista;
    inic(&ptrLista);
    float elem;

    int cod = 0;
   
    do
    {   
        printf("\n\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|            Funcoes             |             Codigos             |\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|          Inserir Final         |                1                |\n");
        printf("|          Remover Final         |                2                |\n");
        printf("|        Exibir Elementos        |                3                |\n");
        printf("|    Exibir Elementos Inverso    |                4                |\n");
        printf("|               Sair             |                5                |\n");
        printf("|--------------------------------|---------------------------------|\n");

        printf("Digite o Codigo da Funcao: ");
        scanf("%d", &cod);

        switch (cod){
            

            case 1:
                printf("\nDigite um numero real: ");
                scanf("%f", &elem);
                inserirFim(&ptrLista, elem);
            break;

            case 2:
                removerFim(&ptrLista);
            break;

            case 3:
                exibir(&ptrLista);
            break;

            case 4:
                imprimirContrario(ultimo(&ptrLista));
            break;

            case 5:
                printf("Voce esta saindo");
                desalocarNO(ptrLista);
            break;
    
            default:
                printf("Codigo Invalido");
            break;
        }
    }while (cod != 5);
    
    return 0;
}