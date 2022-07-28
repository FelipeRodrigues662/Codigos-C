#include <stdio.h>
#include <stdlib.h>

void exclamacao(int n){

    int cont = 0;
    int cont2 = 0;
    char exc = '!';
    int guard = n;
    
    for(guard = n; guard > 0; guard--){
        while(n > 0){
            printf("%c", exc);
            n--;
        }
        printf("\n");
        n = guard -1;
    }
}

int main(){

    int n = 0;

    printf("Digite um valor: ");
    scanf("%d", &n);
    exclamacao(n);

    return 0;
}