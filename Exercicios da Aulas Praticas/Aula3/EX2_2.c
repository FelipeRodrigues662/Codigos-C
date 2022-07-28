#include <stdio.h>


int main(){
    int b, a, num, i;

    b=1;
    
    printf("Digite o valor de numeros triagulares que você que achar: ");
    scanf("%d", &num);

    while (i < num)
    {
        printf(" %d",b);
        
        i++;
        a++;
        b = (a+1)+b;
        
    }
      
    return 0;
}