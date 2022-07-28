#include <stdio.h>

void preencheVetor(int *vet, int n){
    int i ;

    for ( i = 0; i < n; i++)
    {
        printf("Digite o valor da [%d] posição do vetor: ", i + 1);
        scanf("%d", &(vet[i]));
    }
}

void imprimeVetor(int *vet, int n){
    int i ;

    printf("\n");

    for ( i = 0; i < n; i++)
    {
        printf("O valor da [%d] posição do vetor eh: %d\n", i + 1, vet[i]);
    }
}

void retornaMaiorElemento(int *vet, int n){
    int i;
    int maior = -1;
    int idMaior = 0;

    printf("\n");

    for ( i = 0; i < n; i++){
        if(vet[i] > maior){
            maior = vet[i];
            idMaior = i;
        }
    }
    printf("Maior Elemento: \n");
    printf("Vetor[%d] = %d\n", idMaior + 1, maior);
}


int main(){

    int vet[1000];

    preencheVetor(vet, 1000);
    imprimeVetor(vet, 1000);
    retornaMaiorElemento(vet, 1000);


    return 0;
}