#include <stdio.h>
#include <stdlib.h>

typedef struct sNO{
    char info;
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

void inserirInicio(NO **lista){
    NO *novo;
    novo = alocarNO();
    char elem;

    if(novo != NULL){

        printf("Digite uma letra: ");
        fflush(stdin);
        scanf("%c", &elem);
        fflush(stdin);
        novo->info = elem;

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


void exibir(NO *lista){
    NO *aux;

    if (lista != NULL){ //Há itens na lista
        aux = lista->prox;
        do{
            if(aux->info == 'a' ||aux->info == 'e' ||aux->info == 'i' ||aux->info == 'o' ||aux->info == 'u')
                printf("%c ", aux->info);
            else if(aux->info == 'A' ||aux->info == 'E' ||aux->info == 'I' ||aux->info == 'O' ||aux->info == 'U')
                printf("%c ", aux->info);
            aux = aux->prox;
        }while(aux != lista->prox);
    }
    else{
        printf("Lista Vazia");
        exit(1);
    }
    printf("\n\n");
} 

void removerFim(NO **lista)
{
    NO *aux;
    if (!listaVazia(*lista))
    {
        if ((*lista) == (*lista)->prox)
        {
            desalocarNO(*lista);
            *lista = NULL;
        }
        else
        {
            while ((*lista)->prox != aux)
            {
                *lista = (*lista)->prox;
                (*lista)->prox = aux->prox;
                desalocarNO(aux);
            }
        }
    }
    else
    {
        printf("A lista esta vazia!\n");
    }
}