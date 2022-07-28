#include <stdio.h>
#include <stdlib.h>

int main(){

    int *vet;
    int n, i;
    int pares, impares;

    printf("Digite o valor de N:\n");
    scanf("%d", &n);

    vet = (int*) malloc(n * sizeof(int));

    printf("Digite os elemento:\n ");

    for(i = 0 ; i < n ; i++)
        scanf("%d", &vet[i]);
    
    printf("\nOs elemento sao:\n ");

    for(i = 0 ; i < n ; i++){
        printf("%d", vet[i]);

        if(vet[i]%2 == 0)
            pares++;
        else
            impares++;
    }
    
    printf("\nPares = %d\nImpares = %d\n",pares,impares);

    free(vet);
    
    return 0;
}