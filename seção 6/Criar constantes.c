//* Criar constantes imutáveis

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main() {
    printf("Valor de Pi: %f \n", PI);

    int i;

    for (i = -2; i <= PI; i++){
        printf("\n %d \n", i);
    }

    system("pause");
    return 0;
}