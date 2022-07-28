#include <stdio.h>

int main(){

    int matricula;
    float nota;

    printf("Digite sua matricula: ");
    scanf(" %d", &matricula);
    
    printf("\nDigite sua nota: ");
    scanf(" %f", &nota);

    if (nota >= 9)
        printf("Sua Matricula eh: %d\nSua nota eh: %.2f e o conceito eh A \n", matricula, nota);
    else if (nota >= 8 && nota < 9)
        printf("Sua Matricula eh: %d\nSua nota eh: %.2f e o conceito eh B \n", matricula, nota);
    else if (nota >= 6 && nota < 8)
        printf("Sua Matricula eh: %d\nSua nota eh: %.2f e o conceito eh C \n", matricula, nota);
    else if (nota >= 3 && nota < 6)
        printf("Sua Matricula eh: %d\nSua nota eh: %.2f e o conceito eh D \n", matricula, nota);
    else if (nota < 3)
        printf("Sua Matricula eh: %d\nSua nota eh: %.2f e o conceito eh E \n", matricula, nota);

    return 0;

}