#include <stdio.h>
#include <stdlib.h>

void somatorio(int n){

    int i = 1, soma = i, guard = n;

    for(i = 1 ; i <= n ; i++)
        soma = soma + i;

    printf("%d", soma - 1);
}

int main(){

    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    somatorio(n);

    return 0;
}