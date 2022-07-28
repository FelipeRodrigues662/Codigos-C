#include <stdio.h>
#include <stdlib.h>

typedef struct sAluno
{
    int matricula;
    char nome[101];
    float nota1;
    float nota2;
    float nota3;
    float media;
    int codigo;
}Aluno;

int main(){

    Aluno alunos[5];
    int cont;
    int maiorNotaP1 = 0;
    int maiorMedia = 0;
    int menorMedia = 0;



    for (cont = 0; cont < 5; cont++)
    {
        printf("Digite as informacoes do aluno %d \n", cont + 1);
        printf("Digite a Matricula: ");
        scanf("%d", &alunos[cont].matricula);
        fflush(stdin);
        printf("Digite o nome do aluno: ");
        fflush(stdin);
        gets(alunos[cont].nome);
        fflush(stdin);
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &alunos[cont].nota1);
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &alunos[cont].nota2);
        printf("Digite a nota da terceira prova: ");
        scanf("%f", &alunos[cont].nota3);
    }

    for (cont = 0;cont < 5; cont++)
    {
        if(alunos[cont].nota1 > maiorNotaP1)
            maiorNotaP1 = cont;

        alunos[cont].media = (alunos[cont].nota1 + alunos[cont].nota2 + alunos[cont].nota3)/3;

        if(alunos[cont].media > maiorMedia)
            maiorMedia = cont;

        if(alunos[cont].media < menorMedia)
            menorMedia = cont;

        if(alunos[cont].media >= 60)
            alunos[cont].codigo = 1;
        else
            alunos[cont].codigo = 2;
    }


    printf("A maior nota eh do aluno %d a nota eh: %.2f.", maiorNotaP1, alunos[maiorNotaP1].nota1);
    printf("A maior media geral eh do aluno %d a nota eh: %.2f.", maiorMedia, alunos[maiorMedia].media);
    printf("A menor media geral eh do aluno %d a nota eh: %.2f.", menorMedia, alunos[menorMedia].media);

    for(cont = 0; cont < 5 ; cont++)
    {
        if(alunos[cont].codigo == 1)
            printf("Aprovado \n");
        else if(alunos[cont].codigo == 2)
            printf("Reprovado \n");
    }


    return 0;

}