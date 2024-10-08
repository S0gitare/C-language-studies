#include <stdio.h>
#include <stdlib.h>
#define LINHA 2
#define COLUNA 3

int main(){
    //* Cria a matriz
    int matriz[LINHA][COLUNA];
    int i, j;

    //* Lê os valores para a matriz
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    //* Imprime a matriz
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    system("pause");
    return 0;
}