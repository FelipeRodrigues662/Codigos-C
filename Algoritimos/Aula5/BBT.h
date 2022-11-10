#include <stdio.h>
#include <stdlib.h>

typedef struct sNo{
    char info;
    struct sNo *prox;
}NO;

void inic(NO **lista){
    *lista = NULL;
}

NO* alocandoNo(){
    return (NO*) malloc(sizeof(NO));
}

NO* desalocandoNo(NO* q){
    free(q);
}

int listaVazia(NO **lista){
    if (*lista == NULL){
        return 1;
    }else{
        return 0;
    }
}

void inserirIni(NO **lista, char elem){
    NO *novo;
    novo = alocandoNo();

    if(novo != NULL){
        novo -> info = elem ;
        novo -> prox = *lista;
        *lista = novo;
        printf ("ELEMENTO INSERIDO COM SUCESSO!");
    }else{
        printf ("ERRO!!!");
    }
}

void inserirFim(NO** lista, char elem){
    NO *novo;
    NO *aux;
    novo = alocandoNo();

    if (novo != NULL){
        novo -> info = elem;
        novo -> prox = NULL;

        if(listaVazia(lista)){
            *lista = novo;
        }else{
            aux = *lista;
            while (aux -> prox!= NULL)
                aux = aux -> prox;
            aux -> prox = novo;
        }
        printf ("ELEMENTO INSERIDO COM SUCESSO!");
    }else{
        printf ("ERRO!!!");
    }
}


void removerIni(NO** lista){
    if(listaVazia(lista)){
        printf ("A LISTA ESTA VAZIA!");
    }else{
        NO* aux;
        aux = *lista;
        *lista = aux -> prox;
        desalocandoNo(aux);
        printf ("ELEMENTO REMOVIDO!");
    }
}

void removerFim(NO** lista){

   
    NO *aux;
   
    if(listaVazia(lista)){
        printf("LISTA VAZIA!\n");
    }else{
        aux = *lista;
        while (aux -> prox== NULL)
            aux = aux -> prox;
        *lista = aux -> prox;
        desalocandoNo(aux);
    }
    printf ("ELEMENTO REMOVIDO!");

}


void removerNoEspecifico(NO** lista){
    if  (listaVazia(lista)){
        printf ("A LISTA ESTA VAZIA!");
    }else{
        NO* aux;
        char caracter;
        printf("Digite a letra a ser excluida: ");
        fflush(stdin);
        scanf("%c", &caracter);
        fflush(stdin);
            if(strcmp(aux->prox, caracter) == 0){
                aux = aux -> prox;
                *lista = aux;
                desalocandoNo(aux);
                printf ("A DISCIPLINA FOI REMOVIDA COM SUCESSO!");
                
            }
    }
}


void exibindo (NO** lista){
    if (listaVazia(lista)){
        printf ("LISTA VAZIA!\n");
    }else{
        NO* aux;
        aux = *lista;
        while (aux != NULL){
            printf ("%c ", aux -> info);
            aux = aux -> prox;
        }
        printf ("\n\n");
    }
}

