#include <stdio.h>
#include <stdlib.h>


void ladosTriangulo(int valor1, int valor2, int valor3){

    if(valor1 < (valor2 + valor3))
        if(valor2 < (valor1 + valor3))
            if(valor3 < valor1 + valor2)
                printf("Esses lados formam um triangulo \n");
            else    
                printf("Nao formam um triangulo \n");
}

void tipoDeTriangulo(int valor1, int valor2, int valor3){
    //# Chama-se equilátero o triângulo que tem três lados iguais.
    if(valor1 == valor2 && valor1 == valor3 && valor2 == valor3)
        printf("O triagulo eh equilatero \n");
    //# Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
    else if(valor1 == valor2 || valor1 == valor3 || valor2 == valor3)
        printf("O triangulo eh isosceles \n");
    //# Recebe o nome de escaleno o triângulo que tem os três lados diferentes
    else if(valor1 != valor2 && valor1 != valor3 && valor2 != valor3)
        printf("O triangulo eh escaleno \n");
}

int main(){

    int valor1, valor2, valor3;

    printf("Digite 3 Valores: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    ladosTriangulo(valor1, valor2, valor3);
    tipoDeTriangulo(valor1, valor2, valor3);

    return 0;
}