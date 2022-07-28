#include <stdio.h>

void numero(int *num){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    *num = n;
}

int main(){

    int num;

    numero(&num);

    printf("%d", num);

    return 0;
}