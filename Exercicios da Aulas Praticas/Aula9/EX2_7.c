#include <stdio.h>

int menorElemento(int *pVet, int i, int idMenor, int menor){

    if(i == 9){
        if(pVet[i] < menor){
            menor = pVet[i];
            idMenor = i;
        }
    
        return idMenor;
        
    }
    else{
        if(pVet[i] < menor){
            menor = pVet[i];
            idMenor = i;
        }
        return menorElemento(pVet, i + 1, idMenor, menor);
    }
}

int main(){

    int vet[10];
    int i = 0;

    for ( i = 0; i < 10; i++){
        printf("Digite o valor da [%d] posição do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    
    int res = menorElemento(vet, 0, 0, 1000);

    printf("Menor Valor eh: %d\nIndicie: %d\n",vet[res], res);
    
    return 0;
}