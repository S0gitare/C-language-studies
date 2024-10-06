//* Faça um programa que que mostra uma tabuada
//* De um número informado pelo usuário

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int N, i;

    printf("Digite um numero: ");
    scanf("%d", &N);

    printf("\n ---------------------\n");
    printf("\n    Tabuada do %d:\n", N);
    printf("\n ----------------------\n");

    for (i = 0; i <= 10; i++) {
        printf("\n %d + %d = %d\n", N, i, N + i);
    }

    system("pause");
    return 0;
}