//* Faça um algoritmo que leia 3 valores para um vetor de 3 posições
//* E depois calcule a média dos vetores acessando o vetor

//* Usando outra forma

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int vetorA[3], media;

    for (i = 0; i < 3; i++){
        printf("Digite o %dº valor do vetor A: ", i);
        scanf("%d", &vetorA[i]);
        media = media + vetorA[i];
    }

    printf("\n a media eh igual a %d ", media/3);

    system("pause");
    return 0;
}