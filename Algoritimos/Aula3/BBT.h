typedef struct sNo{
   char info;
   struct sNo *prox;
}No;

No *inic(No *lista){

   lista = NULL;
   return lista;
}

No *alocarNo(){
   return (No*) malloc(sizeof(No));
}

No desalocarNo(No *elem){
   free(elem);
}

int listaVazia(No *lista){

   if(lista == NULL)
      return 1;
   else
      return 0;
}

No *inserirInicio(No *lista){

   No *novo;
   char elem;
   novo = alocarNo();

   if(novo != NULL){
      printf("Digite uma letra: ");
      novo->info = elem;
      novo->prox = lista;
      lista = novo;
      return lista;
   }
   else{
      printf("\n Erro na Allocação do No");
      return NULL;
   }
}

No *procurarVogais(No *lista){

   No* aux;
   aux = lista;
   int cont;

   if(!listaVazia(lista)){
      while (aux != NULL){
         if(aux->info == 'a' ||aux->info == 'e' ||aux->info == 'i' ||aux->info == 'o' ||aux->info == 'u')
            printf("[%d] = %c", aux->info, aux->prox);
         else if(aux->info == 'A' ||aux->info == 'E' ||aux->info == 'I' ||aux->info == 'O' ||aux->info == 'U')
            printf("[%d] = %c", aux->info, aux->prox);
         
         aux = aux->prox;
      }
   }
   else
      printf("Lista Vazia!!!!");
}

No *rmTodosElementos(No *lista){
   No *aux;

   if(!listaVazia(lista)){
      aux = lista;
      while (aux->prox != NULL){
         lista = aux->prox;
         desalocarNo(aux);
         aux = lista;
      }
      lista = NULL;
      desalocarNo(aux);

      printf("Elementos Apagados!!!");
      return lista;
   }
   else{
      printf("Lista Vazia!!!");
   }
}