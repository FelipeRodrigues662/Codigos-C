#include <stdio.h>
#include <stdlib.h>

typedef struct sPessoa
{
    char nome[31];
    char opBancaria;
}Pessoa;

typedef struct sNo
{
    Pessoa info;
    struct sNo *prox;
}NO;

typedef struct sFila
{
    NO* inicio;
    NO* fim;
}Fila;

void inic(Fila *ptr){
    ptr -> inicio = NULL;
    ptr -> fim = NULL;
}

int vazia(Fila *ptr){
    if(ptr -> inicio == NULL){
        return 1;
    }
    return 0;
}

NO* alocarNo(){
    return (NO*) malloc(sizeof(NO));
}

void enfileirar(Fila *ptr, Pessoa elem){
    NO* novo;
    novo = alocarNo();
    if (novo != NULL)
    {
        novo -> info = elem;
        novo -> prox = NULL;
        if (vazia(ptr))
        {
            ptr -> inicio = novo;
            ptr -> fim = novo;  
        }else
        {
            (ptr -> fim) -> prox = novo;
            ptr -> fim = novo;
        }
        printf("*Pessoa inserida com sucesso na fila*\n\n");

    }else{
        printf("Problema na alocacao!\n");
    }
}

void impressaoNaoClassica(Fila *ptr){
    if (!vazia(ptr)){
        NO* aux;
        aux = ptr -> inicio;

        while (aux != NULL){
            printf("\nPessoa: %s", aux -> info.nome);
            printf("\nEscolheu a opcao: %c", aux -> info.opBancaria);
            aux = aux -> prox;
        }
        printf("\n");
    }else{
        printf("Fila Vazia!");
    }
}
