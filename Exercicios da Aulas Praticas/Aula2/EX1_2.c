#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero inteiro: ");
    scanf(" %d", &num);

    if (num % 2)
        printf("%d eh impar \n",num);
    else
        printf("%d eh par \n",num);
    
    return 0;
}