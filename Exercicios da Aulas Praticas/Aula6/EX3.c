#include <stdio.h>
#include <stdlib.h>

typedef struct sDataNacimento{
    int dia;
    int mes;
    int ano;
}dataNacimento;

typedef struct sEndereco{
    char nomeRua[101];
    int num;
    char cidade[101];
    char estado[101];
    int cep;
}Endereco;

typedef struct sPessoa
{
    char nome[101];
    char sexo[101];
    int peso;
    dataNacimento nacimento;
    Endereco end;

}Pessoa;


int main(){

    Pessoa pes;

    printf("Digite seu nome: ");
    gets(pes.nome);
    fflush(stdin);

    printf("Digite seu Sexo: ");
    gets(pes.sexo);
    fflush(stdin);
    
    printf("Digite seu peso: ");
    scanf("%d", &pes.peso);
    fflush(stdin);
    
    printf("Digite o dia do seu nacimento: ");
    scanf("%d", &pes.nacimento.dia);
    fflush(stdin);
    
    printf("Digite o mes do seu nacimento: ");
    scanf("%d", &pes.nacimento.mes);
    fflush(stdin);
    
    printf("Digite o ano do seu nacimento: ");
    scanf("%d", &pes.nacimento.ano);
    fflush(stdin);

    printf("Digite o Nome da Sua Rua: ");
    gets(pes.end.nomeRua);
    fflush(stdin);
    
    printf("Digite o Numero da sua casa: ");
    scanf("%d",&pes.end.num);
    fflush(stdin);
    
    printf("\nDigite o Nome da sua Cidade: ");
    gets(pes.end.cidade);
    fflush(stdin);
    
    printf("Digite o Nome do Seu Estado: ");
    gets(pes.end.estado);
    fflush(stdin);
    
    printf("Digite o CEP: ");
    scanf("%d", &pes.end.cep);
    fflush(stdin);

    printf("\n %s", pes.nome);
    printf("\n %s", pes.sexo);
    printf("\n %d", pes.peso);
    printf("\n %d/%d/%d", pes.nacimento.dia, pes.nacimento.mes, pes.nacimento.ano);
    printf("\n %s", pes.end.nomeRua);
    printf("\n %d", pes.end.num);
    printf("\n %s", pes.end.cidade);
    printf("\n %s", pes.end.estado);
    printf("\n %d", pes.end.cep);

    return 0;
}