#include <stdio.h>

int main()
{

    int n1, n2, inv1, inv2;

    printf("Digite dois numeros: ");
        scanf(" %d %d", &n1, &n2);
    
    inv1 = n1;
    inv2 = n2;

    n1 = inv2;
    n2 = inv1;

    printf("\n%d \n%d \n ", n1, n2);

    return 0;
}