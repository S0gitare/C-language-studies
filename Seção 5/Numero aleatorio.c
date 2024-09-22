//gerar números aleatórios

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //usa o tempo atual da máquina como semente
    srand(time (NULL));

    //Cria um número aleatório de 0 a 9
    int r = (rand() %10) +5;//o numero que colocar aqui, vai estar gerando um numero 1 antes do escolhido

    //mostra o numero gerado na tela
    printf("Numero gerado: %d", r);

    return 0;
}