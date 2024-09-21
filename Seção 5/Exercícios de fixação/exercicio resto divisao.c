//Faça um programa que leia um número inteiro
//E informe se ele é par ou não

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    int N1;

    printf("\n Digite um numero para ver se ele e par ou impar: ");
    scanf("%d", &N1);

    if (N1 %2 == 0){
        printf("\n O numero e par \n");
    }else{
        printf("\n O numero e impar \n");
    }

    system("pause");
    return 0;
}