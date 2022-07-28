#include <stdio.h>

int main(){

    float n1, n2;
    int menu;


    printf("Digite dois numeros reais: ");
    scanf(" %f %f", &n1, &n2);

    printf("Escolha uma operação do menu: ");

    printf("             Menu:                \n");
    printf("__________________________________\n");
    printf("||     Operacoes    ||  Codigo  ||\n");
    printf("||__________________||__________||\n");
    printf("||                  ||          ||\n");
    printf("||       Soma       ||    1     ||\n");
    printf("||     Subtracao    ||    2     ||\n");
    printf("||   Multiplicacao  ||    3     ||\n");
    printf("||      Divisao     ||    4     ||\n");
    printf("||__________________||__________||\n");

    printf("\nEscolha o codigo da operacao: ");
    scanf(" %d", &menu);

    switch (menu)
    {
        case 1 :
            printf("\n%.2f + %.2f = %.2f\n", n1, n2, n1+n2);
            break;
            
        case 2 :
            printf("\n%.2f - %.2f = %.2f\n", n1, n2, n1-n2);
            break;

        case 3 :
            printf("\n%.2f * %.2f = %.2f\n", n1, n2, n1*n2);
            break;

        case 4 :
            printf("\n%.2f / %.2f = %.2f\n", n1, n2, n1/n2);
            break;

        default:
            printf("\nCodigo invalido.\n");
            break;
    }

    return 0;
}