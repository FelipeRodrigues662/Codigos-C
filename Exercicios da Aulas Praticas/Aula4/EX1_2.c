#include <stdio.h>

int main(){

    int vetor[10];
    int cont = 0;
    int dois=0, tres=0, cinco=0;

    printf("Digite 10 numeros interios no intervalo de 0 a 9: ");
    do
    {
        printf("\nNumero %d: ", cont+1);
        scanf(" %d", &vetor[cont]);

        while (vetor[cont] < 0 || vetor[cont] > 9){

            printf("Valor Digitado Maior do que o intervalo de 0 a 9 digite novamente: ");
            scanf(" %d", &vetor[cont]);
        }
        
        cont++;

    } while(cont < 10);
    
    for ( cont = 0; cont < 10; cont++){
        if (vetor[cont]==2)
            dois++;
        else if (vetor[cont]==3)
            tres++;
        else if (vetor[cont]==5)
            cinco++;
    }
        
    printf("\nDois: %d \nTres: %d \nCinco: %d",dois,tres,cinco);
    
    printf("\n");
    return 0;
}