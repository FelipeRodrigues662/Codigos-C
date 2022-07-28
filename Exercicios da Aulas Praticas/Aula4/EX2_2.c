#include <stdio.h>

int main(){

    float vetor[50];
    int cont;

    for ( cont = 0; cont <= 50; cont++)
    {
        vetor[cont]=((cont+5*cont)%(cont+1));
    }

    for ( cont = 0; cont < 50; cont++)
    {
        printf("Vetor[%d]= %.2f\n", cont, vetor[cont]);
    }
    
    return 0;
}