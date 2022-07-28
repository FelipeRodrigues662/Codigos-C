#include <stdio.h>

int recursividade(int n){
    if(n==10)
        printf("%d", n);
    else{
        printf("%d", n);
        recursividade(n+1);
    }    
}

int main(){

    recursividade(1);

    return 0;
}