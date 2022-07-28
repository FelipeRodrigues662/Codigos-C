#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str1[20], str2[20];
    int cont = 0;

    printf("Digite Duas Palavras para serem comparadas: \n");
    printf("Palavra 1: ");
    fgets( str1 , 20 , stdin);
    printf("Palavra 2: ");
    fgets( str2, 20, stdin);

    cont = strcmp( str1 , str2);

    if(cont == 0)
        printf("As Duas Palavras sao iguais. \n");
    else
        printf("As Duas Palavras nao são iguais. \n");

    return 0;
}