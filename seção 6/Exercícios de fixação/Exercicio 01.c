//Faça um programa que imprima 
//De 50 até 0, diminuindo de 6 em 6

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int i = 50;

    while (i >= 0){
        printf("\n %d \n", i);
        i = i - 6;

        sleep(1);
    }


    system("pause");
    return 0;
}