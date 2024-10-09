#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
using namespace std;

int main(){

    int b;
    int *ponteiro;
    ponteiro = &b;
    printf("%d \n", &b);

    //*  * pode ser lido como: "CONTEÚDO APONTADO POR"
    *ponteiro = 40;
    printf("%d \n", &b);
    printf("O valor de b eh igual a %d \n", b);

    system("pause");
    return 0;
}