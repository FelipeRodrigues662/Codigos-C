#include <stdio.h>
#include <stdlib.h>

int main(){

    int *vet;
    int i;
    
    vet = (int*) malloc(5 * sizeof(int));

    printf("Digite os valores do vetor: \n");

    for(i = 0 ; i < 5 ; i++){
        printf("Posição[%d]: ", i + 1);
        scanf("%d",&vet[i]);
    }

    for(i = 0 ; i < 5 ; i++)
        printf("\nPosição[%d]: %d", i+1, vet[i]);

    printf("\n");
    free(vet);

    return 0;
}