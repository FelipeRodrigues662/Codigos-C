#include <stdio.h>


int main(){

    char codigo;

    
    printf("                Tabela de consumo energetico:                 \n");
    printf("______________________________________________________________\n");
    printf("||  Codigo  ||  Aparelhos                                   ||\n");
    printf("||__________||______________________________________________||\n");
    printf("||          ||                                              ||\n");
    printf("||    A     ||   Ventilador, Televisao                      ||\n");
    printf("||    B     ||   Aparelho de Som, Batedeira                 ||\n");
    printf("||    C     ||   Fogao eletrico, Liquidificador             ||\n");
    printf("||    D     ||   Freezer, Geladeira, Maquina de Lavar       ||\n");
    printf("||    E     ||   Ar-condicionado, Micro-ondas               ||\n");
    printf("||__________||______________________________________________||\n");

    printf("\nDigite Codigo: ");
    scanf(" %c", &codigo);

    switch (codigo)
    {
        case 'A':
        printf("\nVentilador, Televisao\n");
        break;
        case 'a':
        printf("\nVentilador, Televisao\n");
        break;

        case 'B':
        printf("\nAparelho de Som, Batedeira\n");
        break;
        case 'b':
        printf("\nAparelho de Som, Batedeira\n");
        break;

        case 'C':
        printf("\nFogao eletrico, Liquidificador\n");
        break;
        case 'c':
        printf("\nFogao eletrico, Liquidificador\n");
        break;

        case 'D':
        printf("\nFreezer, Geladeira, Maquina de Lavar\n");
        break;
        case 'd':
        printf("\nFreezer, Geladeira, Maquina de Lavar\n");
        break;

        case 'E':
        printf("\nAr-condicionado, Micro-ondas\n");
        break;
        case 'e':
        printf("\nAr-condicionado, Micro-ondas\n");
        break;

        default:
            printf("Codigo Invalido.");
        break;
    }


    return 0;
}