#include <stdio.h>

void incrementar(int *pValor){

    *pValor = *pValor + 2;

}

int main(){

    int valor;
    int cont = 1;

    printf("dIGITE UM VALOR: ");
    scanf("%d", &valor);

    while (cont <= valor)
    {
        printf("%d", cont);
        incrementar(&cont);
    }
    
    

    return 0;
}