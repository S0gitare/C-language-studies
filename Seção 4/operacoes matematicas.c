#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int a = 5, b = 3;

    //soma
    printf("\n A soma de %d + %d eh igual a: %d" , a , b , a + b);

    //Subtração
    printf("\n A subtracao entre %d - %d eh igual a: %d" , a , b , a - b);

    //Divisão
    printf("\n A divisao entre %d e %d eh igual a: %d" , a , b , a / b);

    //multiplicção
    printf("\n A multiplicacao entre %d e %d eh igual a: %d" , a , b , a * b);

    //resto da divisão
    printf("\n O resto da divisão entre %d e %d eh igual a: %d" , a , b , a % b);

    //valor absoluto
    printf("\n O valor absoluto de -5 eh igual a: %d", abs(-5));

    system("pause");


    return 0;
}

