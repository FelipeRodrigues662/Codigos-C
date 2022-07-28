#include <stdio.h>
#include <stdlib.h>

int main(){

    char palavras[50];
    int i, cont = 0;

    printf("Digite seu nome: ");
    fgets(palavras, 50, stdin);

    for ( i = 0;palavras[i] != '\0'; i++)
        cont++;
   

    printf("%d\n\n",cont - 1);

    return 0;
}