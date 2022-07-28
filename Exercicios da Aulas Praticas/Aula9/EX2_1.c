#include <stdio.h>

int recursividade(int n){
    if(n==10)
        printf("%d", n);
    else{
        recursividade(n+1);
        printf("%d", n);
       
    }    
}

int main(){

    recursividade(1);

    return 0;
}