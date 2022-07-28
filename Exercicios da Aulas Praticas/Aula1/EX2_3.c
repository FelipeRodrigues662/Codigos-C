#include <stdio.h>

int main()
{
    float salario;
    
    printf("Digite seu salario: ");
        scanf(" %f", &salario);                                 //(Salario X 25%) + Salario = Aumento
    printf("Seu salario com aumento de 25 porcento eh: %.f \n",(salario*0.25)+salario);


    return 0;
}