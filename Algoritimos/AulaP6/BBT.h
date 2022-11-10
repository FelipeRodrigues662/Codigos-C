#include <stdio.h>
#include <stdlib.h>
typedef struct sDiaS{
    char diaSemana[13];
}DiaS;

typedef struct sNO{
    DiaS info;
    struct sNO *prox;
}NO;

void inic(NO **lista){
    *lista = NULL;
}

NO* alocarNO(){
    return (NO*)malloc(sizeof(NO));
}

void desalocarNO(NO* q){
    free(q);
}

int listaVazia(NO *lista){
    if (lista == NULL)
        return 1;
    else
        return 0;
}

void inserirFim(NO **lista){
    NO *novo;
    novo = alocarNO();

    if(novo != NULL){

        printf("Digite o dia da semana: ");
        fflush(stdin);
        gets(novo->info.diaSemana);
        fflush(stdin);

        if(listaVazia(*lista)){
            novo->prox = novo;
        }
        else{
            novo->prox = (*lista)->prox;
            (*lista)->prox = novo;
        }
        *lista = novo;
    }
    else{
        printf("\nErro na alocação do no\n");
        exit(1);
    }
}

void removerInicio(NO **lista){
    NO *aux;

    if(!listaVazia(*lista)){
        if((*lista) == (*lista)->prox){
            desalocarNO(*lista);
            *lista = NULL;
        }
        else{
            aux = (*lista)->prox;
            (*lista)->prox = aux->prox;
            desalocarNO(aux);
        }
    }
    else{
        printf("\nErro de alocacao\n");
        exit(1);
    }
}

void exibir(NO *lista){
    NO *aux;

    if (lista != NULL){ //Há itens na lista
        aux = lista->prox;
        do{
            printf("%s\n", aux->prox);
            aux = aux->prox;
        }while(aux != lista->prox);
    }
    else{
        printf("Lista Vazia");
        exit(1);
    }
    printf("\n\n");
} 
