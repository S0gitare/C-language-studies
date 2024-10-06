//* Faça um algoritmo que imprima os números de 10 a 0
//* De forma regressiva. (Usando while, do while ou for)

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int i;

    for (i = 10; i >= 0; i--) {
        printf("\n %d \n", i);
        sleep(1);
    }
    system("pause");
    return 0;
}