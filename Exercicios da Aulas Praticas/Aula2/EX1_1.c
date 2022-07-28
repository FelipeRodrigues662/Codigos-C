#include <stdio.h>

int main()
{

    int n1, n2;

    printf("Digite dois numeros inteiros: \n");
    scanf(" %d %d", &n1, &n2);

    if (n1 > n2)
        printf("O primeiro numero que voce digitou eh maior { %d } \n", n1);
    else
        printf("O Segundo numero que voce digitou eh maior { %d } \n", n2);


    return 0;
}