#include <stdio.h>

int main(){

    int num, i, b, a, total;

    b=1;
    i = 0;
    printf("Digite um numero: ");
    scanf(" %d", &num);

    while (i < num)
    {
        printf("%d",b);
        
        i++;
        a = b;
        b = a+2;
        total=a+b;
    }

    printf(" ha somas desses numeros %d eh equivalente a %d elevado ha 2\n", total, num);


    return 0;
}