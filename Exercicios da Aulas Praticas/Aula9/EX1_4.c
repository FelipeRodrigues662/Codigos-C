#include <stdio.h>

int imprime(int *vet, int n){

    if(n == 0)
        return vet[0];
    else{
        int maior = imprime(vet, n-1);

        if(vet[n]>maior)
            return vet[n];
        else
            return maior;
    }
}

int main(){

    int vet[5]={1,5,10,3,8};
    int valor = imprime(vet, 5);

    printf("%d\n", valor);

    return 0;
}