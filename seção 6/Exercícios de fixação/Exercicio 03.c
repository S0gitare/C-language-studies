//Faça um programa que mostre a soma de
//Dois números entre 5 e 10, apenas quando os
//Dois números digitados estiverem no intervalo de 5 e 10


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int a = 0;
    int b = 0;

    while(!(a > 5 && b < 10) || !(b > 5 && a < 10)){
        printf("\n Digite valores entre 5 e 10. \n");
        printf("\n Digite o primeiro valor: \n");
        scanf("%d", &a);
        printf("\n Digite o segundo valor: \n");
        scanf("%d", &b);
    }

    printf("\n a soma dos dois e igual: %d \n", a + b);

system("pause");
return 0;
}