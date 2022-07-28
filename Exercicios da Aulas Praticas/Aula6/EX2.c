#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sEndereco{
    char nomeRua[101];
    int num;
    char cidade[101];
    char estado[101];
    int cep;
}Endereco;


int main(){

    Endereco end;

    printf("Digite o Nome da Sua Rua: ");
    gets(end.nomeRua);
    fflush(stdin);
    printf("Digite o Numero da sua casa: ");
    scanf("%d",&end.num);
    fflush(stdin);
    printf("\nDigite o Nome da sua Cidade: ");
    gets(end.cidade);
    fflush(stdin);
    printf("Digite o Nome do Seu Estado: ");
    gets(end.estado);
    fflush(stdin);
    printf("Digite o CEP: ");
    scanf("%d", &end.cep);
    fflush(stdin);

    printf("\nNome da Rua: %s", end.nomeRua);
    printf("Numero da Casa: %d", end.num);
    printf("\nCidade: %s", end.cidade);
    printf("Estado: %s", end.estado);
    printf("CEP: %d", end.cep);

    return 0;
}