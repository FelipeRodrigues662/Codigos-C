#include <stdio.h>
#include <stdlib.h>

typedef struct sPessoa{
    char nome[21];
    float altura;
    float peso;
}Pessoa;

void IMC(){
    float imc;
    int cont = 0;

    Pessoa pes[2];

    for(cont = 0 ; cont < 2 ; cont++){
        printf("Digite o nome da %d pessoa: ", cont +1);
        fflush(stdin);
        gets(pes[cont].nome);
        fflush(stdin);
        printf("\nDigite a altura da %d pessoa: ", cont +1);
        scanf("%f", &pes[cont].altura);
        printf("\nDigite o peso da %d pessoa: ", cont +1);
        scanf("%f", &pes[cont].peso);
    }

    for(cont = 0 ; cont < 2 ; cont++){
        imc = pes[cont].peso/(pes[cont].altura*pes[cont].altura);
        printf("A pessoa %s possui IMC igual a %.2f \n", pes[cont].nome, imc);
    }
        
}

int main(){

    IMC();

    return 0;
}