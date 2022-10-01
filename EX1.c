#include <stdio.h>
#include <stdlib.h>
#include "bbtc.h"

int main(){
     No *ptrLista;
     int op, x;

     ptrLista = inicioLista(ptrLista);

     while (op != 4){
          Disciplina disciplina;t
          printf("------------> MENU <--------------\n");
          printf("  Selecione uma opcao abaixo:\n");
          printf("  1 - Inserir disciplina\n");
          printf("  2 - Remover disciplina\n");
          printf("  3 - Exibir a(s) disciplina(s)\n");
          printf("  4 - Sair\n");
          printf("----------------------------------\n\n");
          printf("DIGITE A OPCAO: ");
          scanf("%d", &op);
          fflush(stdin);

          switch (op){
          case 1:
               printf("\n--------------------------------------------------------------\n");
               printf("                NOVO CADASTRO DE DISCIPLINA \n");
               printf("--------------------------------------------------------------\n");
               disciplina = preencheDisc(disciplina);
               ptrLista = inserirFinal(ptrLista,disciplina);
               printf ("----> INSERIDA COM SUCESSO! <----\n\n");
               system("pause");
               printf ("\n");
               break;

          case 2:
               printf("--------------------------------------------------------------------\n");
               printf("               REMOVENDO DISCIPLINA CADASTRADA \n");
               printf("--------------------------------------------------------------------\n");
               ptrLista = removendoDis(ptrLista);
               system("pause");
               printf ("\n");
               break;

          case 3:
               printf("--------------------------------------------------------------------------\n");
               printf("               DISCIPLINAS CADASTRADAS NO CURSO DE SI \n");
               printf("--------------------------------------------------------------------------\n");
               exibindoDis(ptrLista);
               system("pause");
               printf ("\n");
               break;

          case 4:
               printf("---------------------------------------------------------------\n");
               printf("                          SAINDO..\n");
               printf("---------------------------------------------------------------\n");
               system("pause");
               system("cls");
               printf ("\n\n");
               break;

          default:
               printf ("\nOPCAO INVALIDA, RETORNE AO MENU!\n");
               system("pause");
               printf ("\n\n");
               break;
          }
     }
     return 0;
}
