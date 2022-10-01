#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sDiciplina{

    char codDiciplina[21];
    char nomeDiciplina[21];
    int creditos;
    int cargaHoraria;

}Diciplina;


typedef struct sNo{
    Diciplina info;
    struct sNo *prox;
}No;

No *inic(No *lista){
    lista = NULL;
    return lista;
}

No *alocarNo(){
    return (No*) malloc(sizeof(No));
}

void desalocarNo(No* elem){
    free(elem);
}

int listaVazia(No *lista){
    if(lista == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

No *inserirFinal(No *lista){
    No *novo;
    No *aux;

    novo = alocarNo();

    if(novo != NULL){

        printf("Digite o codigo da diciplina: ");
        fflush(stdin);
        gets(novo->info.codDiciplina);
        fflush(stdin);

        printf("Digite o Nome da Diciplina: ");
        fflush(stdin);
        gets(novo->info.nomeDiciplina);
        fflush(stdin);

        printf("Digite a quantidade de Creditos da Diciplina: ");
        scanf("%d", &novo->info.creditos);
        
        printf("Digite a quantidade de Creditos da Diciplina: ");
        scanf("%d", &novo->info.cargaHoraria);

        novo->prox = NULL;

        if(listaVazia(lista) == 1){
            lista = novo;
            printf("Adicionado Primeiro Elemento");
       
        }else{
            aux = lista;

            while(aux -> prox != NULL){
                aux = aux->prox;
            }

            aux->prox = novo;
            
        }

        return lista;
    }else{
        printf("Erro de Alocação!!!");
        return NULL;
    }
}

No *rmInicio(No *lista){
    No *q;
    q = lista;

    if(!listaVazia(lista)){
        lista = q->prox;
        desalocarNo(q);
        return lista;
    }
    else{
        printf("Erro de Allocacao!!!");
        return NULL;
    }
}

No *pesquisar(No *lista, char *elem){
    No *aux;
    aux = lista;

    if(!listaVazia(lista)){
        while(aux != NULL){
            if(strcmp(aux->info.codDiciplina, elem) == 0){
                printf("Encontrado");
                return aux;
            }
            aux = aux->prox;
        }
    }

    return NULL;
}

No *rmDiciplina(No *lista){
    char element[21];
    No *aux;
    No *q;

    printf("Digite o Codigo da diciplina que quer remover: ");
    fflush(stdin);
    gets(element);
    fflush(stdin);

    if((q = pesquisar(lista, element)) != NULL){
        aux = lista;

        if(aux==q){
            rmInicio(lista);
        }
        else{
            while(aux->prox != q){
                aux = aux->prox;
            }
            desalocarNo(q);
        }
        return lista;
        
    }
    return NULL;
}