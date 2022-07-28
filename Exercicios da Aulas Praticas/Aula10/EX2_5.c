#include <stdio.h>
#include <stdlib.h>

void maiorMenor(int **pMat, int pI, int pJ){

    int lin, col;
    int maior = pMat[0][0], menor = pMat[0][0];


    for(lin = 0; lin < pI ; lin++){
        for(col = 0 ; col < pJ ; col++){
            if(pMat[lin][col] > maior){
                maior = pMat[lin][col];
            }

            if(pMat[lin][col] < menor){
                menor = pMat[lin][col];
            }
        }
    }

    printf("\nO maior elemento da matriz eh: %d", maior);
    printf("\nO menor elemento da matriz eh: %d\n", menor);
}

int main(){

    int **mat;
    int i, j;
    int lin , col, cont;
 

    printf("Defina as dimensoes da matriz: \n");
    printf("Linhas: ");
    scanf("%d", &i);
    printf("\nColunas: ");
    scanf("%d", &j);
    
    mat = (int**) malloc(i * sizeof(int*));

    for(lin = 0; lin < i ; lin++){
        mat[lin] = (int*) malloc(j * sizeof(int));
        for(col = 0 ; col < j ; col++){
            printf("\nMat[%d][%d]: ", lin, col);
            scanf("%d", &mat[lin][col]);
        }
    }

    for(lin = 0; lin < i ; lin++){
        for(col = 0 ; col < j ; col++){
            printf("%d ", mat[lin][col]);
        }
        printf("\n");
    }

    maiorMenor(mat, i, j);

    for(cont = 0 ; cont < i ; cont++){
        free(mat[cont]);
    }
    free(mat);

    return 0;
}