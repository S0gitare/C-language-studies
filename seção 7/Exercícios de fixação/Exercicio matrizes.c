//* Faça uma matriz de 2x2 lendo valores do usuário e
//* Depois troque os valores entre a primeira e a segunda linha

#include <stdio.h>
#include <stdlib.h>

void swaprows(int matriz [2][2], int row1, int row2){
    for (int i = 0; i < 2; i++) {
        int temp = matriz[row1][i];
        matriz[row1][i] = matriz[row2][i];
        matriz[row2][i] = temp;
    }
}
int main(){
    int matriz[2][2];
    int i, j;

    for ( i = 0; i < 2; i++ ){
        for (j = 0; j < 2; j++ ){
            printf("\n Digite o valor da matriz na posicao %d x %d \n",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    swaprows(matriz, 0, 1);
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

