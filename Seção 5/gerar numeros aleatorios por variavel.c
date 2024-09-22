//gerar números aleatórios

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //usa o tempo atual da máquina como semente
    srand(time(NULL));

    //cria um numero aleatorio de 5 a 14
    int maximo = 14;
    int minimo = 5;

    //traduzindo para a formula
    //                  14    -    5   + 1 = 10
    int r = (rand() % (maximo - minimo + 1)) + minimo;

    //entao teremos um numero de 0 a 9 + 5
    //ou seja, o minimo sera 5 e o maximo sera 14

    //imprime o numero gerado
    printf("Numero gerado: %d \n", r);

    system("pause");
    return 0;
}