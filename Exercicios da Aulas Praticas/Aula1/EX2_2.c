#include <stdio.h>

int main()
{

    float nota1, nota2, nota3;

    printf("Digite suas notas: ");
        scanf(" %f %f %f", &nota1, &nota2, &nota3);
    printf("Sua media aritimetica eh: %.2f \n",(nota1+nota2+nota3)/3);

    return 0;
}