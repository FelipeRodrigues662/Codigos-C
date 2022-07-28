#include <stdio.h>

int somaTorio(int n){
    if(n == 1)
        return 1;
    else
        return n + somaTorio(n-1);
}

int main(){

    int n = somaTorio(4);

    printf("%d", n);

    return 0;
}