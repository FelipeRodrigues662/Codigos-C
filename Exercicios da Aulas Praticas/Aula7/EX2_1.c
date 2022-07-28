#include <stdio.h>
#include <stdlib.h>

int dobro(int inteiro){

    inteiro*=2;

    return inteiro ;
}

int main(){

    int inteiro = 0;
    int res = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);

    res = dobro(inteiro);

    printf("O Dobro do Inteiro eh: %d\n", res);
    
    return 0;
}