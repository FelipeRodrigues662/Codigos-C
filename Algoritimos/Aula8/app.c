#include <stdio.h>
#include <stdlib.h>
#include "bbtc.c"

int main(){

    int opcao;
    Pessoa pes;
    Fila *fila;

    fila = (Fila*) malloc (sizeof (Fila));

    inic(fila);

    do{
     printf("\n------->ESCOLHA UMA OPCAO<-------\n");
     printf("\n");
     printf("1) - INSERIR UM ELEMENTO NA FILA\n");
     printf("2) - EXIBIR OS ELEMENTOS DA FILA\n");
     printf("3) - SAIR\n\n");
     printf("DIGITE A OPCAO DESEJADA: ");
     scanf("%d", &opcao);

     switch(opcao){
         case 1:
                 printf("\nInforme o nome do proprietario da conta: ");
                 fflush(stdin);
                 gets(pes.nome);
                 fflush(stdin);

                 printf("\nInforme a atividade bancaria:\n");
                 printf("--> S para sacar\n");
                 printf("--> D para depositar\n");
                 printf("--> P para efetuar pagamento\n");
                 scanf("%c", &pes.opBancaria);
                 enfileirar(fila, pes);
                 break;
         case 2:
                 impressaoNaoClassica(fila);
                 break;
         case 3:
                printf ("SAINDO..\n");
                break;
            default:
                 printf("OPCAO INCORRETA!\n");
                 break;
     }
    } while (opcao !=3);
    return 0;
}
