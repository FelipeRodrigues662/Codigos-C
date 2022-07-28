#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota, somaNotas = 0, media, maior, notaAnt = 0, menor = 0;
    int i;
    

    for ( i = 1; i < 16; i++)
    {
        printf("Digite a Nota do Aluno %d:",i);
        scanf(" %f", &nota);

        somaNotas = somaNotas + nota;
        notaAnt = somaNotas - nota;

        if (notaAnt < nota)
            maior = nota;
        
    }

    media = somaNotas/15;
    printf("\nMedia :%.2f \n",media);

    printf("Maior: %.2f \n", maior);

    return 0;
}