#include <stdio.h>
#include <string.h>

void imprime(char *p, int i, int n){

    if(i == n)
        printf("%c\n", p[i]);
    else{
        printf("%c\n", p[i]);
        imprime(p, i+1, n);
    }

}

int main(){

    char palavra[10] = {'a','b','c','d','e','f','g','h','i','j'};

    imprime(palavra, 0, 9);

    return 0;
}