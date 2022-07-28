#include <stdio.h>

int main()
{

    int num = 1000 , valor, valor2;

    
    while (num < 10000)
    {
 
    valor= (num/100);
    valor2= (num%100);


    if ((valor+valor2) * (valor+valor2)==num)
        printf ("\nO numero %d possui a mesma propriedade que 3025. \n", num);
    
    num++;

    }

    return 0;
}