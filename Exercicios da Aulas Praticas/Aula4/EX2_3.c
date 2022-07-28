#include <stdio.h>

int main(){
    
    float vetor[15];
    int cont=0;
    int codigo=0;

    for (cont = 0; cont < 15; cont++)
    {
        printf("Vetor[%d]= ", cont+1);
        scanf(" %f", &vetor[cont]);
    }
    
    printf("Digite o codigo para fazer a leitura do vetor: ");
    scanf(" %d", &codigo);
    printf("Valor dos Vetores: \n");

    while (!(codigo == 1 || codigo == 2)){
        printf("Codigo invalido Digite 1 ou 2: ");
        scanf(" %d", &codigo);
    }
    
    if (codigo == 1)
    {
        for ( cont = 0; cont < 15; cont++)
        {
            printf("Vetor[%d] = %.2f\n",cont+1,vetor[cont]);
        }
    }
    else if (codigo == 2)
    {
        for ( cont = 14; cont > -1; cont--)
        {
            printf("Vetor[%d] = %.2f\n",cont+1,vetor[cont]);
        }
    }
    
    

    return 0;
}