#include <stdio.h>
#include <stdlib.h>

#define CONSTANTE 5
#define QUEBRADO 9.3
#define LETRA 'A'

int main(){

    const int LADO = 10;
    printf("Valor do lado: %d\n", LADO);
    printf("Valor da constante: %d\n", CONSTANTE);
    printf("Valor do numero quebrado: %.1f\n", QUEBRADO);
    printf("Valor da letra: %c\n", LETRA);
    system("pause");
    return 0;
}