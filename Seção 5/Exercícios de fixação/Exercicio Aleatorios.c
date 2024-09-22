//faça um programa que joga 3 dados (de seis lados)
//aleatórios e exibe o resultado da soma dos 3 valores gerados na tela

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //usa o tempo atual da máquina como semente
    srand(time(NULL));

    int maximo = 6;
    int minimo = 1;
    int resultado;


    int D1 = (rand() % (maximo - minimo + 1)) + minimo;
    int D2 = (rand() % (maximo - minimo + 1)) + minimo;
    int D3 = (rand() % (maximo - minimo + 1)) + minimo;

    resultado = (D1 + D2 + D3);

    //imprime o numero gerado
    printf("Numeros gerados foram: %d %d %d \n", D1, D2, D3);
    printf("\n A soma dos 3 valores gerados e igual: %d \n", resultado);

    system("pause");
    return 0;
}