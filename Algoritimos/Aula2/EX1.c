#include <stdio.h>
#include <stdlib.h>
#include "BBT1.h"
#define tam 100


int main(){

    lMusicas *ptr;
    int cont = 0;

    ptr = (lMusicas*) malloc(tam * sizeof(lMusicas));
    inicializarLista(ptr);
        

    do{

        printf("--------------------Menu--------------------\n");
        printf("--------------------------------------------\n");
        printf("----------Funcao-------------Codigo---------\n");
        printf("-----Cadastrar Musica-----------1-----------\n");
        printf("-------Buscar Musica------------2-----------\n");
        printf("-----------Sair-----------------3-----------\n");
        printf("--------------------------------------------\n");

        printf("Digite o codigo da funcao: ");
        scanf("%d", &cont);

        switch (cont){
            

            case 1:
                cadastrarMusica(ptr);
            break;

            case 2:
                buscarMusica(ptr);
            break;

            case 3:
                cont = 3;
            break;
            
            default:
            break;
        }

    }while(cont != 3);
 
    
    
    
    free(ptr);
    ptr = NULL;

    return 0;
}