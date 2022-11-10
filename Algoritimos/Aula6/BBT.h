#include <stdio.h>
#include <stdlib.h>

typedef struct sNO{
    float info;
    struct sNO *dir;
    struct sNO *esq;
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

int listaVazia(NO **lista){

    if(*lista == NULL){
        return 1;
    }else{
        return 0;
    }
}

void exibir (NO** lista){

    if (listaVazia(lista)){
        printf ("LISTA VAZIA!\n");
    }else{
        NO* aux;
        aux = *lista;
        while (aux != NULL){
            printf ("%.2f ", aux->info);
            aux = aux->dir;
        }
        printf ("\n\n");
    }
}

void removerinicio(NO **lista)
{
    NO *aux;
    aux = *lista;
    if (!listaVazia(lista))
    {
        *lista = aux->dir;
        (*lista)->esq = NULL;
        desalocarNO(aux);
    }
    else
    {
        printf("A lista esta vazia, insira um elemento!\n");
        exit(1);
    }
}

void inserirInicio(NO **lista, int elem){
    NO *novo;
    novo = alocarNo();

    if (novo != NULL){
        novo -> info = elem;
        novo -> esq = NULL;
        novo -> dir = *lista;
    }
    if(!vazia(lista))
        (*lista)-> esq = novo;

    *lista = novo;
    }
    else{
        printf("\nERRO: falha na alocação do nó!.\n");
        exit(1);
    }
} 

int remover_valor(NO **lista, int elem){
    NO *q;
 
    if ((q = pesquisar(*lista, elem)) != NULL){

    if(*lista == q) // nó está no início
        remover_inicio(lista);
    else{
        (q->esq)->dir = q->dir;
    if(q->dir != NULL)
        (q->dir)->esq = q->esq;
    desalocarNo(q);
    }
    return 1; // removeu
    }
    return 0; // não removeu
}