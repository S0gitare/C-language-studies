//Faça um programa que leia 3 numeros inteiros 
//E imprima na tela se os 3 são maiores que 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    int N1, N2, N3;

    printf("\n Digite o primeiro numero: ");
    scanf("%d", &N1);
    printf("\n Digite o segundo numero: ");
    scanf("%d", &N2);
    printf("\n Digite o terceiro numero: ");
    scanf("%d", &N3);

    if (N1 > 10 && N2 > 10 && N3 > 10){
        printf("\n Todos os numeros sao maiores que 10 \n");
    }else if (N1 > 10 && N2 > 10){
        printf("\n Apenas dois numeros sao maiores que 10 \n");
    }else if (N1 > 10 && N3 > 10){
        printf("\n Apenas dois numeros sao maiores que 10 \n");
    }else if(N2 > 10 && N3 > 10){
        printf("\n Apenas dois numeros sao maiores que 10 \n");
    }else if (N1 > 10 || N2 > 10 || N3 > 10){
        printf("\n Apenas um numero e maior que 10 \n");
    }else{
        printf("\n Nenhum numero e maior que 10 \n");
    }

    system("pause");
    return 0;
}