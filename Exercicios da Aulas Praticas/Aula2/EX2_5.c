# include <stdio.h>

int main (){

    int num, valor, valor2;

    
        printf("Digite um numero inteiro de 1000 a 9999: ");
        scanf(" %d", &num);

        valor= (num/100);
        valor2= (num%100);


        if ((valor+valor2) * (valor+valor2)==num)
            printf ("\nO numero %d possui a mesma propriedade que 3025. \n", num);
        else
            printf("\nO numero %d não possui a mesma propriedade que 3025. \n", num);
    

    
    return 0;
}