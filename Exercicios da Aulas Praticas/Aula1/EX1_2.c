/*  
    Declarar Biblioteca
    Definir a função principal
    Declarar as Variaveis
    Ler o valor do lado
    Calcular a area do quadrado 
    Imprimir a area para o usuario
    Terminar o Programa
 */

#include <stdio.h>

int main()
{

    int lado;

    printf("Digite o Valor de um dos lados do quadrado: ");

        scanf(" %d", &lado);

    printf("\nO valor da area do quadrado eh: %d \n", lado*lado);
   
    return 0;
}