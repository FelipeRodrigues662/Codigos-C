#include <stdio.h>

int main(){

    int quantidade;
    char codigo;
    float total;

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


    printf("Digite os codigos dos produtos \nQuando quiser comfirmar o pedido Digite Z: ");
    scanf(" %c", &codigo);
    
    while (codigo != 'Z' && codigo != 'z')
    {
        printf("Digite a Quantidade: ");
        scanf(" %d", &quantidade);

        switch (codigo)
        {

            case 'a':
            case 'A':
                total = total + 1.2 * quantidade;
                break;
            
            case 'b':
            case 'B':
                total = total + 1.3 * quantidade;
                break;
            
            case 'c':
            case 'C':
                total = total + 1.5 * quantidade;
                break;

            case 'd':
            case 'D':
                total = total + 1.2 * quantidade;
                break;

            case 'e':
            case 'E':
                total = total + 1.7 * quantidade;
                break;
                
            case 'f':
            case 'F':
                total = total + 2.2 * quantidade;
                break;

            case 'g':
            case 'G':
                total = total + 2.0 * quantidade;
                break;

            default:
                printf("Codigo Invalido!!!");
                break;
        }
        
        printf("Digite os codigos dos produtos \nQuando quiser comfirmar o pedido Digite Z: ");
        fflush(stdin);
        scanf(" %c", &codigo);
    }
        
    printf("\nValor Total %.2f\n \n", total);

    return 0;
}