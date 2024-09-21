//Faça um programa que leia dois números 
//inteiros e imprima na tela se a soma deles é:
//MAIOR/IGUAL a 10  OU  MENOR QUE 10


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    int N1, N2, soma;

    printf("\n Digite um Numero: ");
    scanf("%d", &N1);

    printf("\n Digite mais um numero: ");
    scanf("%d", &N2);

    soma = (N1 + N2);
    if(soma > 10){
        printf("\n A soma e maior que 10 \n");
    }else if(soma == 10){
        printf("\n A soma e igual a 10 \n");
    }else{
        printf("\n A soma e menor que 10 \n");
    }

    system("pause");
    return 0;
}