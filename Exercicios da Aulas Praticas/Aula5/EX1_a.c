#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavras[50];
    int valor = 0;

    printf("Digite seu nome: ");
    fgets(palavras, 50, stdin);

    valor = strlen(palavras);
   

    printf("%d\n\n",valor- 1);

    return 0;
}