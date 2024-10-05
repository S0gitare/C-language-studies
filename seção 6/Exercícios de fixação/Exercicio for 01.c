//* Faça um programa que mostre a soma de todos os números de 0 a 10
//* Adicionando o valor atual de I numa variável SOMA, a cada repetição do laço FOR

#include <stdio.h>

int main() {
    int i;
    int soma = 0;

    for (i = 0; i < 10; i++) {
        printf("%d \n ", i);
    }

    soma = (soma + i);
    printf(" \n A soma de todas as repeticoes e igual a: %d ", soma);

    return 0;
}