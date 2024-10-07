//* Faça um algoritmo que leia 3 valores para um vetor de 3 posições
//* E depois calcule a média dos vetores acessando o vetor

#include <stdio.h>
#include <stdlib.h>

int main (){
    float media;
    int vetor[3] = {1, 2, 3};
    printf("\n Digite o primeiro valor:\n");
    scanf("%d",&vetor[1]);
    printf("\n Digite o segundo valor:\n");
    scanf("%d",&vetor[2]);
    printf("\n Digite o terceiro valor:\n");
    scanf("%d",&vetor[3]);
    media = (vetor[1] + vetor[2] + vetor[3]) /3.0;
    printf("\n %.1f \n", media);

    system("pause");
    return 0;
}