//faça um programa que leia 2 números inteiros
//E imprima na tela se a soma deles estiver entre 0 e 10
//ou se a soma for par

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    int N1 , N2, resultado;

    printf("\n Digite o primeiro numero: ");
    scanf("%d", &N1);
    printf("\n Digite o segundo numero: ");
    scanf("%d", &N2);

    resultado = (N1 + N2);
    if ((resultado > 0 && resultado < 10) || resultado %2 ==0){
        printf("\n esta entre 0 e 10 ou foi um numero par \n");
    }else {
        printf("\n nao e par e nem esta entre 0 e 10 \n");
    }

    system("pause");
    return 0;
}