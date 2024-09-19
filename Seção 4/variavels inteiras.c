#include <stdio.h>
#include <stdlib.h>


int main(){

    //define uma variável 
    int a = 5;
    int b;

    //mostrando uma variavel na tela
    printf("%d" , a);

    //concatentando
    printf(" \n O valor de a eh: %d" , a);

    system("pause");

    //Mudando o valor de a
    a = 15;

    //mostrando o valor
    printf("\n O valor de a mudou para: %d", a);


    printf("\n Escolha um numero para b: ");
    //lendo o valor de uma variável
    scanf("%d" , &b);

    //escrevendo a variavel escolhida
    printf("\n O valor de b escolhido foi: %d" , b);

    system("pause");

    return 0;
}