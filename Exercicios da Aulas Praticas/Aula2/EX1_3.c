#include <stdio.h>

int main(){

    int quantidade;
    char codigo;

    printf("                    Cardapio:\n");
    printf("________________________________________________\n");
    printf("||  Especificação   ||  Codigo  || Preco(R$)  ||\n");
    printf("||__________________||__________||____________||\n");
    printf("||                  ||          ||            ||\n");
    printf("||      Hot-Dog     ||    A     ||   1.20     ||\n");
    printf("||   Bauru Simples  ||    B     ||   1.30     ||\n");
    printf("||   Bauru com ovo  ||    C     ||   1.50     ||\n");
    printf("||    Hamburguer    ||    D     ||   1.20     ||\n");
    printf("||   Cheeseburguer  ||    E     ||   1.70     ||\n");
    printf("||       Suco       ||    F     ||   2.20     ||\n");
    printf("||    Refrigerante  ||    G     ||   2.00     ||\n");
    printf("||__________________||__________||____________||\n");

    printf("\n \nDigite o Codigo do produto: \n");
    scanf(" %c",&codigo);
    printf("Digite a Qauntidade: \n");
    scanf(" %d", &quantidade);

    switch (codigo)
    {
        //Hot-Dog
        case 'A':
            printf("Voce Pediu %d Hot-Dog O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*1.20);
            break;
        case 'a':
            printf("Voce Pediu %d Hot-Dog O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*1.20);
            break;

        //Bauru Simples
        case 'B':
            printf("Voce Pediu %d Bauru Simples O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*1.30);
            break;
        case 'b':
            printf("Voce Pediu %d Bauru Simples O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*1.30);
            break;

        //Bauru com ovo
        case 'C':
            printf("Voce Pediu %d Bauru com ovo O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*1.50);
            break;
        case 'c':
            printf("Voce Pediu %d Bauru com ovo O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*1.50);
            break;

        //Hamburguer
        case 'D':
            printf("Voce Pediu %d Hamburguer O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*1.20);
            break;
        case 'd':
            printf("Voce Pediu %d Hamburguer O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*1.20);
            break;

        //Cheeseburguer
        case 'E':
            printf("Voce Pediu %d Cheeseburguer O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*1.70);
            break;
        case 'e':
            printf("Voce Pediu %d Cheeseburguer O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*1.70);
            break;

        //Suco
        case 'F':
            printf("Voce Pediu %d Suco O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*2.20);
            break;
        case 'f':
            printf("Voce Pediu %d Suco O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*2.20);
            break;

        //Refrigerante
        case 'G':
            printf("Voce Pediu %d Refrigerante O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*2.00);
            break;
        case 'g':
            printf("Voce Pediu %d Refrigerante O valor do pedido eh: R$ %.2f \n", quantidade, quantidade*2.00);
            break;

        default:
            printf("Codigo ou Quantidade Invalida!!!");
            break;
    }

    return 0;
}