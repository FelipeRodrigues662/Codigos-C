#include <stdio.h>

int main() {
    int n, i, fat; 
    
    
    printf("Digite um inteiro nao-negativo: ");
    scanf("%d", &n);
    
    
    fat = 1;
    i = 2;
    
    while (i <= n){

        fat = fat * i;
        i = i + 1;
    }

    printf("O valor de %d!: %d\n", n, fat);
  
  return 0;
}