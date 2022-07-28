#include <stdio.h>

typedef struct sPessoa{
    char nome[31];
    int idade;
}Pessoa;

void potencia(Pessoa *pPessoa){

    Pessoa vPessoa = *pPessoa;

    printf("%s", vPessoa.nome);
    printf("\n%d \n", vPessoa.idade);
}

int main(){

    Pessoa pessoa;
    
    printf("Digite seu nome: ");
    gets(pessoa.nome);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    potencia(&pessoa);

    return 0;
}