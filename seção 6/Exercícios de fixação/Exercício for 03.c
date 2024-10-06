//* Faça um programa em que o usuário informe o valor inicial,
//* Valor final e de quanto em quanto o valor de I será 
//* Modificado e imprima todos os valores no intervalo
//* Informado com os passos informados

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int c, inicial, final, intervalo;

    printf("Digite o numero inicial: ");
    scanf("%d", &inicial);
    printf("Digite o numero final: ");
    scanf("%d", &final);
    printf("Digite o intervalo: ");
    scanf("%d", &intervalo);

    printf("\n ---------------------\n");
    printf("\n        Tabuada       \n");
    printf("\n ---------------------\n");

    for (c = inicial; c <= final; c = c + intervalo) {
        printf("%d \n", c);
    }

    system("pause");
    return 0;
}