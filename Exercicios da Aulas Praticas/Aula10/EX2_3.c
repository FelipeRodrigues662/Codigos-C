#include <stdio.h>
#include <stdlib.h>

typedef struct scliente{
 
    char nome[51];
    int idade;
    int telefone;

}Clientes;

void leitura(Clientes *pClientes, int num){
    int i;

    for(i = 0 ; i < num ; i++){
        printf("\nDigite o nome do cliente[%d]: ", i + 1);
        fflush(stdin);
        gets(pClientes[i].nome);
        fflush(stdin);
        printf("\nDigite a idade do cliente[%d]: ", i + 1);
        scanf("%d", &pClientes[i].idade);
        printf("Digite o telefone do cliente[%d]: ", i + 1);
        scanf("%d", &pClientes[i].telefone);
    }
}

void escrita(Clientes *pClientes, int num){
    int i;
    
    for(i = 0 ; i < num ; i++){
        printf("\nDigite o nome do cliente[%d]: %s", i + 1, pClientes[i].nome);
        printf("\nDigite a idade do cliente[%d]: %d", i + 1, pClientes[i].idade);
        printf("\nDigite o telefone do cliente[%d]: %d", i + 1, pClientes[i].telefone);
    }
}

int main(){

    int num;
    Clientes *clientes;

    printf("Digite o numero de clientes: ");
    scanf("%d", &num);

    clientes = (Clientes*) malloc( num * sizeof(Clientes));

    leitura(clientes, num);
    escrita(clientes, num);

    free(clientes);
    
    return 0;
}