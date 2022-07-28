#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[20];
    int cont = 0, i = 0;

    printf("Digite Uma Palavra: ");
    fgets(str , 20 , stdin);

    i = strlen(str);
    
    for(cont = 0 ; cont < i ; cont++)
        switch (str[cont])
        {
            case 'a':
            case 'A':
            str[cont] = ' ';
            break;

            case 'e':
            case 'E':
            str[cont] = ' ';
            break;

            case 'i':
            case 'I':
            str[cont] = ' ';
            break;

            case 'o':
            case 'O':
            str[cont] = ' ';
            break;

            case 'u':
            case 'U':
            str[cont] = ' ';
            break;

            default:
            break;
        }
        
    printf("%s",str);

    return 0;
}