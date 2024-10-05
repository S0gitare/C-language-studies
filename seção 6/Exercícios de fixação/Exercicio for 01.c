//* Faça um programa que mostre a soma de todos os números de 0 a 10
//* Adicionando o valor atual de I numa variável SOMA, a cada repetição do laço FOR

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int i;
    int soma = 0;

    for (i = 0; i < 10; i++) {
        printf("\n i = %d (soma: %d) \n ", i, soma);
    
        soma = (soma + i);
        sleep(1);
    }
    printf(" \n Soma %d \n", soma);

    system("pause");
    return 0;
}