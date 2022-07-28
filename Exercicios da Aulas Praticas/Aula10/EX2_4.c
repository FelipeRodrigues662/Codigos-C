#include <stdio.h>
#include <stdlib.h>


void prencher(int *pN, int num){
    int i;

    for(i = 0 ; i < num ; i++){
        printf("Digite o valor da [%d] posicao do vetor: ", i+1);
        scanf("%d", &pN[i]);
    }
}

void imprimir(int *pN, int num){
    int i ;

    for(i = 0 ; i < num ; i++){
        printf("\nO valor da [%d] posicao do vetor: %d", i+1, pN[i]);
    }
    printf("\n");

}

void maiorElementoPar(int *pN, int num){
    
    int maior = pN[0];
    int idMaior = 0;
    int i;

    for(i = 0 ; i < num ; i++){
        if( pN[i]%2 == 0){
            if( pN[i] > maior){
                maior = pN[i];
                idMaior = i;
            }
        } 
    }

    printf("\nO maoir elemento Par esta no indicie[%d] = %d\n", idMaior, pN[idMaior]);

}

void menorElementoImpar(int *pN, int num){
    
    int menor = pN[0];
    int idMenor = 0;
    int i ;

    for(i = 0 ; i < num ; i++){
        if( pN[i]%2 != 0){
            if( pN[i] < menor){
                menor = pN[i];
                idMenor = i;
            }
        } 
    }

    printf("\nO Menor Elemento Impar esta no indicie[%d] = %d\n", idMenor, pN[idMenor]);

}

void media(int *pN, int num){

    int media;
    int i ;

    for(i = 0 ; i < num ; i++){
        media = media + pN[i];
    }

    media = media / num;

    printf("\nA media dos elementos eh: %d\n
    ", media);
}

int main(){

    int num;
    int i;
    int *n;

    printf("Digite a quantidade de inteiros: ");
    scanf("%d", &num);

    n = (int*) malloc( num * sizeof(int));

    prencher(n, num);
    imprimir(n, num);
    maiorElementoPar(n, num);
    menorElementoImpar(n, num);
    media(n, num);

    free(n);
    
    return 0;
}