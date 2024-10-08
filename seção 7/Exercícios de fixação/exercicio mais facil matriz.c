//* Faça uma matriz de 2x2 lendo valores do usuário e
//* Depois troque os valores entre a primeira e a segunda linha

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz [2][2];
    int i, j;

    printf("\n Digite o valor para [0][0]: \n");
    scanf("%d", &matriz[0][0]);
    printf("\n Digite o valor para [0][1]: \n");
    scanf("%d", &matriz[0][1]);
    printf("\n Digite o valor para [1][0]: \n");
    scanf("%d", &matriz[1][0]);
    printf("\n Digite o valor para [1][1]: \n");
    scanf("%d", &matriz[1][1]);

    i = matriz [0][0];
    j = matriz [0][1];

    matriz [0][0] = matriz[1][0];
    matriz [0][1] = matriz[1][1];
    matriz [1][0] = i;
    matriz [1][1] = j;

    printf("\n Matriz completa: \n");
    printf("[%d %d]\n", matriz[0][0], matriz[0][1]);
    printf("[%d %d]\n", matriz[1][0], matriz[1][1]);
}