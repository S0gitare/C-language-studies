#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");
    int a = 0;
    printf("Digite um valor inteiro de a: ");
    scanf("%d", &a);
    float b = 0;
    printf("Digite um valor Real de b: ");
    scanf("%f", &b);
    printf("O valor de a = %d \n ", a);
    printf("O valor de B = %f \n ", b);
    printf("Entao, a + b e igual a = %f" , a + b);
    printf(" \n bora testar isso aqui \n ta funcionando tudo ok");


    return 0;
}
