#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sDiciplina{
    char nome_dis[50];
    char cod[15];
    int cred, carga_hor;
}Diciplina;

typedef struct sNo{
    Diciplina info;
    struct sNo *prox;
}No;

No *inicioLista(No *lista){
    lista = NULL;
    return lista;
}

No *alocandoNo(){
    return (No *)malloc(sizeof(No));
}

void desalocandoNo(No *p){
    free(p);
}

int listaVazia(No *lista){
    if (lista == NULL){
        return 1; //esta vazio
    }
    else{
        return 0;
    }
}

infoiplina preencheinfo(infoiplina info){
    printf("Nome da infoiplina: ");
    scanf("%[^\n]", info.nome_dis);
    fflush(stdin);
    printf("Codigo da infoiplina: ");
    scanf("%[^\n]", info.cod);
    fflush(stdin);
    printf("Numero de creditos: ");
    scanf("%d", &info.cred);
    printf("Carga horaria da infoiplina: ");
    scanf("%d", &info.carga_hor);
    fflush(stdin);
    return info;
}

No *inserirFinal(No *lista, infoiplina infoiplina){
    No *novo;
    No *aux;
    novo = alocandoNo();
    if (novo != NULL){
        novo->prox = NULL;
        novo->info = infoiplina;
        if (listaVazia(lista) == 1){
            lista = novo;
            return lista;
        }
            aux = lista;
            while (aux->prox != NULL){
                aux = aux->prox;
                aux->prox = novo;
            }
    return lista;

    }
    else{
        printf("\nOCORREU UM ERRO AO ALOCAR!\n");
        return NULL;
    }
}

No *removendoDis(No *lista){
    No *anterior = NULL;
    No *aux = lista;
    No * x = NULL;
    char cod[15];

    printf("Codigo da infoiplina a ser excluida: ");
    scanf("%[^\n]", cod);
    fflush(stdin);

    if(listaVazia(lista) == 1){
        printf("A LISTA ESTA VAZIA!\n");
        return lista;
    }

    if(strcmp(aux->info.cod, cod) == 0){
        anterior = aux;
        aux = aux->prox;
        lista = aux;
        free(anterior);
        anterior = NULL;
        printf ("A infoIPLINA FOI REMOVIDA COM SUCESSO!");
        return lista;
    }

    while (aux != NULL){
         anterior = aux;
         aux = aux->prox;

        if(strcmp(aux->info.cod, cod) == 0){
            aux = aux->prox;
            x = anterior->prox;
            anterior->prox = aux;
            free(x);
            printf ("A infoIPLINA FOI REMOVIDA COM SUCESSO!");
            return lista;
        }
    }
    printf("A infoIPLINA NAO FOI ENCONTRADA!");
    return lista;
}


void exibindoDis(No *lista){
    No *aux;
    for (aux = lista; aux != NULL; aux = aux->prox){
       if(strstr(aux->info.cod, "SIN") && (aux->info.carga_hor > 60)){
           printf("Nome da(s) infoiplina(s): %s\n\n", aux->info.nome_dis);
            aux = aux->prox;
       }
    }
    if (lista == NULL){
        printf("NENHUMA infoIPLINA CADASTRADA!\n");
    }
}


