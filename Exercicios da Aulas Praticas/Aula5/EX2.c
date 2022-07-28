#include <stdio.h>
#include <stdlib.h>

int main(){

    char str1[20], str2[20];
    int cont = 0, cont2 = 0;
    int valStr1 = 0;

    printf("Digite Duas Palavras para serem comparadas: \n");
    printf("Palavra 1: ");
    fgets( str1 , 20 , stdin);
    printf("Palavra 2: ");
    fgets( str2, 20, stdin);

    for ( cont = 0;str1[cont] != '\0'; cont++)
        cont2++;

    for(cont = 0; cont < (cont2 - 1) ; cont++){
        if(str1[cont] == str2[cont])
            valStr1++;
    }

    if (valStr1 == (cont2-1))
        printf("As Duas Palavras sao iguais. \n");
    else    
        printf("As Duas Palavras nao são iguais. \n") ;

    return 0;
}