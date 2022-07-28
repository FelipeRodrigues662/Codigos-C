#include <stdio.h>

typedef struct sHora{
    int hora;
    int min;
    int sec;
}tempo;



int main(){

    tempo Hora;

    printf("Digite a Hora: ");
    scanf(" %d", &Hora.hora);
    printf("Digite os Minutos: ");
    scanf(" %d", &Hora.min);
    printf("Digite os Segundos: ");
    scanf(" %d", &Hora.sec);
    printf("\n%d:%d:%d \n", Hora.hora, Hora.min, Hora.sec);
    return 0;
    
}