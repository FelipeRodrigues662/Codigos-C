#include <stdio.h>
#include <stdlib.h>
#include "BBT.h"

int main(){

    NO *ptrLista;
    inic(&ptrLista);
    char elem;

    int cod = 0;
   
    do
    {   
        printf("\n\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|            Funcoes             |             Codigos             |\n");
        printf("|--------------------------------|---------------------------------|\n");
        printf("|         Inserir Inicio         |                1                |\n");
        printf("|          Remover Valor         |                2                |\n");
        printf("|        Exibir Elementos        |                3                |\n");
        printf("|               Sair             |                4                |\n");
        printf("|--------------------------------|---------------------------------|\n");

        printf("Digite o Codigo da Funcao: ");
        scanf("%d", &cod);

        switch (cod){
            

            case 1:
                printf("\nDigite uma letra: ");
                fflush(stdin);
                scanf("%c", &elem);
                fflush(stdin);
                inserirInicio(&ptrLista, elem);
                
            break;

            case 2:
                printf("\nDigite uma letra para remover: ");
                fflush(stdin);
                scanf("%c", &elem);
                fflush(stdin);
                if(removerValor(&ptrLista, elem) == 1)
                    printf("\nRemovido Com Sucesso\n");
                else
                    printf("\nNao foi Removido\n");
        
            break;

            case 3:
                exibir(&ptrLista);
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