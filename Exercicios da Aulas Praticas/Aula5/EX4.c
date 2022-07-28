#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[50];
    int cont = 0, i = 0;
    int vogais = 0, consoantes = 0;

    printf("Digite Uma Palavra: ");
    fgets(str , 50 , stdin);

    i = strlen(str);
    
    for(cont = 0 ; cont < i ; cont++)
        switch (str[cont])
        {
            case 'a':
            case 'A':
            vogais++;
            break;

            case 'e':
            case 'E':
            vogais++;
            break;

            case 'i':
            case 'I':
            vogais++;
            break;

            case 'o':
            case 'O':
            vogais++;
            break;

            case 'u':
            case 'U':
            vogais++;
            break;

            case ' ':
            break;

            case '\0':
            break;

            default:
               consoantes++;
            break;
        }
        
    printf(" %d %d \n", vogais, consoantes - 1);

    return 0;
}