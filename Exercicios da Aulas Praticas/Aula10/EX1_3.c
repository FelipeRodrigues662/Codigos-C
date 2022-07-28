#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int busca(int **mat,int n, int m, int v){
    int i, j;

    for(i = 0 ; i < n; i++){
        for(j = 0 ; j < m ; j++){
            if( mat[i][j] == v)
                return 1;  
        }
    }

    return 0;
}

int main(){

    int **mat;
    int n, m, i , j;
    int valor;

    printf("Digite as dimenssoes: \n");
    scanf("%d %d", &n, &m);

    mat = (int**) malloc(n * sizeof(int*));

    for(i = 0; i < n; i++){
        mat[i] = (int*) malloc(m * sizeof(int));
    }

    printf("Digite os Elementos: \n");
    for(i = 0 ; i < n; i++){
        for(j = 0 ; j < m ; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Os Elementos Sao: \n");
    for(i = 0 ; i < n; i++){
        for(j = 0 ; j < m ; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    if(busca(mat, n, m, valor))
        printf("Elemento encontrado \n");
    else
        printf("Elemento nao encontrado \n");

    for(i = 0 ; i < n ; i++)
        free(mat[i]);

    free(mat);

    return 0;
}