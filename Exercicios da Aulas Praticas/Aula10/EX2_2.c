#include <stdio.h>
#include <stdlib.h>

typedef struct sAluno{
    int mat;
    char sobrenome[21];
    int anoNascimento;
}Aluno;

int main(){

    Aluno *aluno;
    int num;
    int i;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &num);

    aluno = (Aluno*) malloc(num * sizeof(Aluno));

    for(i = 0 ; i < num ; i++){
        printf("\nDigite a matricula do aluno[%d]: ", i + 1);
        scanf("%d", &aluno[i].mat);
        printf("Digite o sobrenome do aluno[%d]: ", i + 1);
        fflush(stdin);
        gets(aluno[i].sobrenome);
        fflush(stdin);
        printf("\nDigite o ano do nacimento do aluno[%d]: ", i + 1);
        scanf("%d", &aluno[i].anoNascimento);
    }

    for(i = 0 ; i < num ; i++){
        printf("\nA matricula do aluno[%d]: %d", i + 1, aluno[i].mat);
        printf("\nO sobrenome do aluno[%d]: %s", i + 1, aluno[i].sobrenome);
        printf("\nO ano do nacimento do aluno[%d]: %d\n", i + 1, aluno[i].anoNascimento);
    }

    free(aluno);
    return 0;
}