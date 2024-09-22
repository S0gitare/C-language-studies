//Faça um programa que leia 2 números inteiros
//E imprima na tela se algun deles for maior que 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    int N1, N2;

    printf("\n Digite o primeiro numero: ");
    scanf("%d", &N1);
    printf("\n Digite o segundo numero: ");
    scanf("%d", &N2);

    if (N1 > 10 && N2 > 10){
        printf("\n Todos os numeros sao maiores que 10 \n");
    }else if (N1 > 10 || N2 > 10){
        printf("\n Apenas um deles e maior que 10 \n");
    }else{
        printf("\n Nenhum e maior que 10 \n");
    }

    system("pause");
    return 0;
}