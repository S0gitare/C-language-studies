//Faça um programa que leia 2 numeros inteiros
//E imprima na tela se algum for par
//Dica: Use parênteses para separar operações de comparação

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

    if(N1 %2 == 0 && N2 %2 ==0){
        printf("\n Todos sao par \n");
    }else if (N1 %2 == 0 || N2 %2 ==0){
        printf("\n Um dos numeros e par \n");
    }else{
        printf("\n Nenhum e par \n");
    }

    system("pause");
    return 0;
}