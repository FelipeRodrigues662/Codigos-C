typedef struct sNo{
    char info;
    struct sNo *prox;
}No;

void inic(No **lista){
    *lista = NULL;
}

No* listaAlocarNo(){
    return (No*) malloc(sizeof(No));
}

void listaDesalocarNo(No* elem){
    free(elem);
}

int listaVazia(No **lista){
    if(*lista == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void inserirInicio(No **lista, char elem){
    NO *novo;
    NO *aux;

    novo = listaAlocarNo();

    if(novo != NULL){
        novo -> info = elem;
        novo -> prox = NULL;
    if(listaVazia(*lista))
        *lista = novo;
    else{
        aux = *lista;
        while (aux -> prox!= NULL)
            aux = aux -> prox;

        aux -> prox = novo;
    }
}

void removerInicio(NO **lista){
    NO *q;
    q = *lista;

    if (!vazia(*lista)){
        *lista = q -> prox;
        desalocarNo(q);
    }
    else{
        printf("\nERRO: lista vazia. \n");
    }
}

NO* inserir_fim(NO **lista, char elem){
    NO *novo;
    NO *aux;

    novo = listaAlocarNo();

    if(novo != NULL){
        novo -> info = elem;
        novo -> prox = NULL;
    if(listaVazia(*lista))
        *lista = novo;

    else{
        aux = *lista;
        while (aux -> prox!= NULL)
            aux = aux -> prox;
        aux -> prox = novo;
    }
}

void listaImprimir(No **lista){
    No *aux;
    aux = *lista;

    if(lsitaVazia(lista)){
        printf("A lsita está vazia");
    }
    do{
        printf("%c", aux->info);
        aux = aux->prox;
    }while (aux != NULL);
}