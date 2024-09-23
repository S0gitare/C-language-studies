//Faça um programa que imprima
//Os números pares de 10 até o numero informado pelo usuario


#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 10;
    int maximo;

    printf("\n Digite ate onde quer contar: ");
    scanf("%d", &maximo);

    while(i <= maximo){

        if (i %2 == 0){
            printf("\n %d \n", i);
        }
    i = i + 1;
    }

    system("pause");
    return 0;
}