#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 100
/* 
    O programa deve ser capaz de armazenar até 100 músicas
    Dados:  +Nome da música
            +Cantor;
            +Durção(Miutos e Segundos);
    Aplicação que apresente um menu
        a. cadastrar múscia(a função deve inserir sempre no inicio da lista);
        b. Pesquise música pelo nome(a função deve retornar a posição da múscia na lista);
        c. Remover Múscia(A função deve remover sempre do final da Lista);
*/


typedef struct sListaDeMusicas
{
    char nome[21];
    char cantor[21];
    int n;
    int min;
    int sec;
}lMusicas;


void inicializarLista(lMusicas *ptr){
    ptr -> n = -1;
}

int listaCheia(lMusicas *ptr){
    if((ptr -> n) <= tam - 1){
        return 0;
    }
    return 1;
}

void cadastrarMusica(lMusicas *ptr){
    if(listaCheia(ptr) == 0){
        ptr->n = ptr->n+1;
        
        printf("Digite o nome da Musica: ");
        fflush(stdin);
        gets(ptr->nome);
        fflush(stdin);
        printf("Digite o nome do Cantor: ");
        fflush(stdin);
        gets(ptr->cantor);
        fflush(stdin);
        
    }
    else
        printf("Lista Cheia \n");
}

void buscarMusica(lMusicas *ptr){

    int i = 0;
    char busca[21];

    printf("Digite o nome da muscia: ");
    fflush(stdin);
    gets(busca);
    fflush(stdin);

    for(i = 0 ; i <= ptr->n ; i++){
        if(strcmp(ptr-> nome, busca) == 0){
            printf("\nA musica esta na %d posicao \n", i+1);
        }
        else
        printf("\nMusica Nao encontrada\n");
    }
}

void rmMusica(){

}