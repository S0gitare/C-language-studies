//Faça um programa que leia um número inteiro
//E imprima na tela se ele está entre 0 e 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    int N1;

    printf("\n Digite um numero: ");
    scanf("%d", &N1);

    if (N1 > 0 && N1 < 10){
        printf("\n O numero esta entre 0 e 10 \n");
    }else{
        printf("\n O numero nao esta entre 0 e 10 \n");
    }
    
    system("pause");
    return 0;
}