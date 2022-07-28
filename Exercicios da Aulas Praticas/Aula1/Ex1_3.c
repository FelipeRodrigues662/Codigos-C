// Acabei fazendo de duas formas esse exercicio uma como estava o enunciado e outra da minha forma


#include <stdio.h>

int main()
{

    float matematica, portugues, conhecimentos, peso1, peso2, peso3;
    float valor1, valor2, valor3, mediaFinal, soma, somaPeso;

    
    printf("Digite as notas: ");
    scanf(" %f %f %f %f %f %f", &matematica, &peso1, &portugues, &peso2, &conhecimentos, &peso3);
    
    valor1 = matematica*peso1;
    valor2 = portugues*peso2;   
    valor3 = conhecimentos*peso3;
    soma = valor1+valor2+valor3;
    somaPeso = peso1+peso2+peso3;
    mediaFinal = soma/somaPeso;

    printf("Sua media final eh: %.2f \n",mediaFinal);

    return 0; 
}