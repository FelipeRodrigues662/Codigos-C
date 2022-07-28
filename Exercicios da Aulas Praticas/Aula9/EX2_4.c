#include <stdio.h>

void verificacao(int n, int i){

    if(i == n){
        if(i % 2 == 0 && i != 0)
            printf("%d\n", i);
    }
    else{
        if(i % 2 == 0 && i != 0)
            printf("%d\n", i);
        verificacao(n, i + 1);
    }
}

int main(){

    int num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    verificacao(num, 0);

    return 0;
}