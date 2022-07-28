#include <stdio.h>
#include <stdlib.h>

int potencia(int vx, int vy){
    
    int cont = 0;
    int guard = 0;

    guard = vx;

    for(cont = 1; cont < vy ; cont++){
        vx = vx * guard;
    }
        
    return vx;
}

int main(){

    int x = 0 , y = 0;
    int res = 0;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    res = potencia(x,y);

    printf("%d", res);

    return 0;
}