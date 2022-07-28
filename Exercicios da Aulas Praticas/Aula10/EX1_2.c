#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *str;
    int n, i;

    printf("Digite o valor de N:\n");
    scanf("%d", &n);

    str = (char*) malloc(n * sizeof(char));

    printf("Digite a String: \n");
    fflush(stdin);
    gets(str);

    printf("String: %s\n", str);

    for(i = 0 ; i < strlen(str) ; i++){

        switch(str[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            break;

            default:
                printf("%c",str[i]);
                break;
        }
    }

    free(str);


    return 0;
}