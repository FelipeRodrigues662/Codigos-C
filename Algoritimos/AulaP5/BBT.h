#include <stdio.h>
#include <stdlib.h>

typedef struct sNO{
    char info;
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

int listaVazia(NO *lista)
{
    if (lista == NULL)
        return 1;
    else
        return 0;
}


void exibir (NO** lista){

    if (listaVazia(*lista)){
        printf ("LISTA VAZIA!\n");
    }else{
        NO* aux;
        aux = *lista;
        while (aux != NULL){
            printf ("%c ", aux->info);
            aux = aux->dir;
        }
        printf ("\n\n");
    }
}

void removerinicio(NO **lista){

    NO *aux;
    aux = *lista;
    if (!listaVazia(*lista))
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

void inserirInicio(NO **lista, char elem){

    NO *novo;
    novo = alocarNO();

    if(novo != NULL){
        novo->info = elem;
        novo->esq = NULL;
        novo->dir = *lista;
        if(!listaVazia(*lista))
            (*lista)->esq = novo;
        *lista = novo;
    }
    else{
        printf("\n ERRO: Falha de alocacao\n");
        exit(1);
    }
}

NO* pesquisar(NO *lista, char elem){
    NO *aux;
    aux = lista;

    if (!listaVazia(lista)){
         while (aux != NULL){
            if (aux->info == elem)
                return aux;
            aux = aux->dir;
        }
        printf("\nElemento nao encontrado!\n");
    }
    else{
        printf("Impossivel pesquisar, lista vazia!\n");
    }
}

int removerValor(NO **lista, char elem){

    NO *q;

    if((q = pesquisar(*lista, elem)) != NULL){
        if(*lista == q)
            removerinicio(lista);
        else{
            (q->esq)->dir = q->dir;
            if(q->dir != NULL)
                (q->dir)->esq = q->esq;
            desalocarNO(q);
        }
        return 1;
    }
    return 0;
}