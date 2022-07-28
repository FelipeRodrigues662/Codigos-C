#include <stdio.h>

int main(){

    int n1, n2;
    
    printf("Digite dois numeros interios: ");
    scanf(" %d %d", &n1, &n2);

    if(n1 > n2 ){
        if(n1 % 2)
            printf("%d eh maior e impar \n", n1);
        else
            printf("%d eh maior e par \n", n1);
    }
    else{
        if(n1 % 2)
            printf("%d eh menor e impar \n", n1);
        else
            printf("%d eh menor e par \n", n1);
    }
        

    if(n1 < n2 ){
        if(n2 % 2)
            printf("%d eh maior e impar \n", n2);
        else
            printf("%d eh maior e par \n", n2);
    }
    else{
        if(n2 % 2)
            printf("%d eh menor e impar \n", n2);
        else
            printf("%d eh menor e par \n", n2);
    }

    return 0;
}