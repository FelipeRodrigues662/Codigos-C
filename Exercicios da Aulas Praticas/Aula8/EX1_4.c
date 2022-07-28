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

void maisNovo(funcionario *vet, int n){
    int i;
    int menorIdade = 9999;
    int idMenor = 0;

    for ( i = 0; i < n; i++){
        if(vet[i].idade < menorIdade){
            menorIdade = vet[i].idade;
            idMenor = i;
        }
    }
    printf("Menor idade: \n");
    imprime(&vet[idMenor]);
}

void maiorSalario(funcionario *vet, int n){
    int i;
    float salarioMairo = -1;
    int idMaior = 0;

    for ( i = 0; i < n; i++){
        if(vet[i].salario < salarioMairo){
            salarioMairo = vet[i].salario;
            idMaior = i;
        }
    }
    printf("Maior Salario: \n");
    imprime(&vet[idMaior]);
}

int main(){

    funcionario vet5;

    int cont = 0;

    for(cont = 0 ; cont < 5 ; cont++){
        digita(&vetor[cont];)
    }

    for(cont = 0 ; cont < 5 ; cont++){
        imprime(&vetor[cont];)
    }

    maisNovo(vet5, 5);
    maiorSalario(vet5, 5);

    
    return 0;
}