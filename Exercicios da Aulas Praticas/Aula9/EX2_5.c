#include <stdio.h>

void prencher(int *pVet, int i){
 
    if(i== 9){
        printf("Digite o Valor da Posição[%d] do Vetor: ", i + 1);
        scanf("%d", &(pVet[i]));
    }
    else{
        printf("Digite o Valor da Posição[%d] do Vetor: ", i + 1);
        scanf("%d", &(pVet[i]));
        prencher(pVet, i + 1);
    }
}

void imprimir(int *pVet,int i){
    if(i == 9)
    {
        printf("Vetor[%d] = %d\n", i+1, pVet[i]);
    }
    else{
        printf("Vetor[%d] = %d\n", i+1, pVet[i]);
        imprimir(pVet, i + 1);
    }

}

int main(){

    int vet[10];
    
    prencher(vet, 0);
    imprimir(vet, 0);

    return 0;
}