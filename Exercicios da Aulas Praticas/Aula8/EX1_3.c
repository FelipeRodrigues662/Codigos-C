#include <stdio.h>

typedef struct sFuncionario{
    char nome[51];
    int idade;
    float salario;

}funcionario;

void digita(funcionario *pf){

    printf("Digite o nome do funcionario1: ");
    fflush(stdin);
    gets(pf->nome);
    printf("Digite a idade: ");
    scanf("%d", &pf->idade);
    printf("Digtie seu salario: ");
    scanf("%f", &pf->salario);
}

void imprime(funcionario *pf){
    printf("\ninformações do funcionario ");
    printf("\nNome: %s", pf->nome);
    printf("\nIdade: %d", pf->idade);
    printf("\nSalario: %.2f", pf->salario);
}

int main(){

    funcionario f1 , f2;
    funcionario *pf;

    digita(&f1);
    digita(&f2);

    imprime(&f1);
    imprime(&f2);
    
    return 0;
}