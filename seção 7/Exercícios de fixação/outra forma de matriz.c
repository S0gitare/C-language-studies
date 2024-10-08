//* Faça uma matriz de 2x2 lendo valores do usuário e
//* Depois troque os valores entre a primeira e a segunda linha

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz [2][2];
    int i, j;
    int aux1, aux2;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite um valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    matriz[0][0] = matriz [1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;
            printf("\n Matriz Completa: \n");
            printf("[%d  %d]\n",matriz[0][0], matriz[0][1]);
            printf("[%d  %d]\n", matriz[1][0], matriz[1][1]);
        printf("\n");

    system("pause");
    return 0;
}