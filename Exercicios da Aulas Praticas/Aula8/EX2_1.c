#include <stdio.h>

void ponteiro(int *p1){
    int p2;

    p2 = *p1;

    printf("%d , %d",*p1, p2);
}

int main(){

    int num = 15;

    ponteiro(&num);

    return 0;
}