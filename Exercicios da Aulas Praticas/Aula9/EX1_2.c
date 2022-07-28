#include <stdio.h>
#include <string.h>

void imprime(char *p, int i, int n){

    if(i == n)
        printf("%c", p[i]);
    else{
        imprime(p, i+1, n);
        printf("%c", p[i]);
    }

}

int main(){

    char palavra[21];

    gets(palavra);

    imprime(palavra, 0, strlen(palavra)-1);

    return 0;
}