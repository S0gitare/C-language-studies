//Faça um programa que leia dois números inteiros
//E imprima na tela qual é o maior deles ou se são iguais

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    int N1, N2;

    printf("\n Digite um Numero: ");
    scanf("%d", &N1);

    printf("\n Digite mais um numero: ");
    scanf("%d", &N2);

    if(N1 == N2){
        printf("\n Os numeros %d e %d sao iguais \n", N1, N2);
    }else if(N1 > N2){
        printf("\n O número %d e maior que %d \n", N1, N2);
    }else if(N2 > N1){
        printf("\n O numero %d e maior que %d \n", N2, N1);
    }

    system("pause");
    return 0;
}