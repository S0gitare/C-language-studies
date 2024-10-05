//* Faça um programa que que mostra uma tabuada
//* De um número informado pelo usuário

#include <stdio.h>

int main() {
    int N1, i;

    printf("Digite um número: ");
    scanf("%d", &N1);

    printf("\n ---------------------\n");
    printf("\n    Tabuada do %d:\n", N1);
    printf("\n ----------------------\n");

    for (i = 0; i < N1; i++) {
        printf("\n %d x %d = %d", N1, i, N1 * i);
        
    }

    system("pause");
    return 0;
}