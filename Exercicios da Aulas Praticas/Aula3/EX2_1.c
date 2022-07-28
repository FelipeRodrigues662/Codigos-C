#include <stdio.h>

int main(){

    int num, i, valor;

    printf("Digite um numero inteiro: ");
    scanf(" %d", &num);

    
    for (i = num; i > 0 ; i--)
    {
            valor = num/i;
            printf(" %d",valor);
    }
    
    return 0;
}