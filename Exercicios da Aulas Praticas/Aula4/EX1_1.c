#include <stdio.h>

int main(){

    int vetor[10]={1,2,3,4,5,6,7,8,9,0};
    int cont;

    for (cont = 0; cont < 10; cont++)
        printf("Vetor[%d]= %d \n", cont+1, vetor[cont]);
        
    return 0;
}