#include <stdio.h>

int main()
{

    float celsius, fahrenheit;

    printf("Digite a temperatura em graus celsius \nPara poder ser convertido em Fahrenheit: ");
        scanf(" %f", &celsius);
    printf("A temperatura em Fahrenheit eh: %.2f \n", fahrenheit = celsius*(9.0/5.0)+32.0);

    return 0;
}