#include <stdio.h>

int main(){

    int vetor[10];
    int cont=0;
    int par=0, impar=0;

    for (cont= 0;cont < 10; cont++)
    {
        printf("Vetor[%d]= ",cont);
        scanf(" %d", &vetor[cont]);
       
        while (vetor[cont] < 0)
        {
            printf("Valor digitado invalido por ser menor que zero digite outro valor: ");
            scanf(" %d", &vetor[cont]);
        }
        
    }

    for (cont = 0; cont < 10; cont++){
        if(vetor[cont]%2 == 0)
            par++;
        else
            impar++;
    }

    printf("\nPar: %d \nImpar: %d \n", par, impar);

    return 0;
}