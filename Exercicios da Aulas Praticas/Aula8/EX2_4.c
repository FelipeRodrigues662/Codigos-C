#include <stdio.h>

typedef struct sAluno{
    char nome[31];
    int matricula;
    float nota;
}Aluno;

void estrutura(Aluno *pAluno, int cont){

    int i;

    for(i = 0 ; i < cont ; i++ ){

        printf("Digite a nome do aluno %d: ", i + 1);
        fflush(stdin);
        gets(pAluno[i].nome);
        fflush(stdin);
        printf("Digite a Matricula do aluno %d: ", i + 1);
        scanf("%d", &(pAluno[i].matricula));
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &(pAluno[i].nota));

        printf("\n");
    }

}

void maiorNota(Aluno *pAluno, int cont){
    int i;
    int maior = -1;
    int idMaior = 0;

    printf("\n");

    for ( i = 0; i < cont; i++){
        if(pAluno[i].nota > maior){
            maior = pAluno[i].nota;
            idMaior = i;
        }
    }
    printf("Maior Nota: \n");
    printf("Aluno[%d] = [%s]",idMaior ,(pAluno[idMaior].nome));
    printf("Aluno[%d] = [%d]",idMaior ,(pAluno[idMaior].matricula));
    printf("Aluno[%d] = [%.2f]",idMaior ,(pAluno[idMaior].nota));
    
}

int main(){

    Aluno aluno[10];

    estrutura(aluno, 10);
    maiorNota(aluno, 10);

    return 0;
}