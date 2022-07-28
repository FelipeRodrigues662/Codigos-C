#include <stdio.h>

int main(){

    char vetor[10];
    int cont = 0;

    for ( cont = 0; cont < 10 ; cont++)
    {
        printf("Digite uma Letra: ");
        scanf(" %c", &vetor[cont]);
        fflush(stdin);

    }

    for ( cont = 0; cont < 10 ; cont++)
    {
        printf("%c", vetor[cont]);
    }
    
    printf("\n \n");

    for ( cont = 0; cont < 10; cont++)
    {
        if (vetor[cont] == 'a' || vetor[cont] == 'e' || vetor[cont] == 'i' || vetor[cont] == 'o' || vetor[cont] == 'u')
        {
            printf("%c", vetor[cont]);
        }
    }

    printf("\n \n");

    for ( cont = 0; cont < 10; cont++)
    {
        if (!(vetor[cont] == 'a' || vetor[cont] == 'e' || vetor[cont] == 'i' || vetor[cont] == 'o' || vetor[cont] == 'u'))
        {
            printf("%c", vetor[cont]);
        }
    }

    printf("\n \n");
    
    return 0;
}