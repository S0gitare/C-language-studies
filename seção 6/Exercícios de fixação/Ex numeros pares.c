//* Crie um algoritmo que imprima os numeros pares de 10 a 20
//* Usando While, do while ou for

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 10;

    while(i <= 20){
        if ( i %2 == 0){
            printf("%d\n", i);
        }
    i++;
    }

    system("pause");
    return 0;
}