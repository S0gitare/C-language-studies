//faça uma calculadora, que leia dois valores
//E mostre as opções de somar ou subtrair. 
//Após selecionar a opção, o resultado será mostrado na tela
//Baseado em um switch.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    int N1, N2, resultado;
    int opcao;

    printf("\n -------------------------- \n");
    printf("\n        Calculadora         \n");
    printf("\n -------------------------- \n");
    printf("\n [1]...................Soma \n");
    printf("\n [2]..............Subtracao \n");

    scanf("%d", &opcao);
    switch (opcao){
        case 1:
            printf("\n Digite o primeiro numero: ");
                scanf("%d", &N1);
            printf("\n Digite o segundo numero: ");
                scanf("%d", &N2);
            resultado = (N1 + N2);
            printf("\n O resultado da soma foi: %d \n", resultado);
            break;
        case 2:
            printf("\n Digite o primeiro numero: ");
                scanf("%d", &N1);
            printf("\n Digite o segundo numero: ");
                scanf("%d", &N2);
            resultado = (N1 - N2);
            printf("\n O resultado da subtracao foi: %d \n", abs(-resultado));
            break;
        default:
            printf("\n Selecao invalida \n");
            break;
    }


    system("pause");
    return 0;
}