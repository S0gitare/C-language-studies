//* Crie um algoritmo que informe se o valor lido é primo ou não


#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor, i , resto = 0;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    for (i = 1; i <= valor; i++)
        if (valor %i == 0){
            resto++;
        }
    printf("\n %d / %d tem o resto = %d \n", valor, i, resto);

    if (resto == 2){
        printf("\n O numero %d e primo.\n", valor);
    }else {
        printf("\n O numero %d nao e primo.\n", valor);
    }
    system("pause");
    return 0;
}