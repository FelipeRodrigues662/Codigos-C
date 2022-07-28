#include <stdio.h>

typedef struct sAluno{
    char nome[21];
    int matricula;
    float CR;
}Aluno;

void imprimir(Aluno *alunos, int i){
    if(i == 49){
        printf("\nAluno[%d] \n\n",i + 1);
        printf("Nome: %s", (alunos[i].nome));
        printf("Matricula: %d \n", (alunos[i].matricula));
        printf("CR: %.2f \n", (alunos[i].CR));
    }
    else{
        printf("\nAluno[%d] \n\n",i + 1);
        printf("Nome: %s\n", (alunos[i].nome));
        printf("Matricula: %d \n", (alunos[i].matricula));
        printf("CR: %.2f \n", (alunos[i].CR));

        imprimir(alunos ,i+1);
    }
}


int main(){

    Aluno aluno[50];
    int cont = 0;

    for(cont = 0 ; cont < 50 ; cont++){
        printf("Digite as informações do aluno [%d]\n", cont + 1);

        printf("Digite o nome do aluno: ");
        fflush(stdin);
        gets(aluno[cont].nome);
        fflush(stdin);
        printf("Digite a Matricula do aluno: ");
        scanf("%d", &aluno[cont].matricula);
        printf("Digite o CR do aluno: ");
        scanf("%f", &aluno[cont].CR);
        fflush(stdin);
    }

    imprimir(aluno, 0);

    return 0;
}
