#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
using namespace std;
#define TAM 2

int main(){
    //* Definindo vetores
    int vetor[3];
    int count;
    int i, j;

    //* Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //* Imprimindo valores do vetor
    for (count = 0; count < 3; count++){
        printf("%d \n",vetor[count]);
    }
    //* Imprimindo com C++
    for (count = 0; count < 3; count++){
        cout << vetor[count] << "\n";
    }

    //* Usando while

    count =0;
    while (count <3){
        printf("%d \n",vetor[count]);
        count++;
    }

    


    system("pause");
    return 0;
}