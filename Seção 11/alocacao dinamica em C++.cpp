#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <new>
using namespace std;


int main(){
    int tamanho, cont;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    int *vetor = new int [tamanho];
    for (cont=0; cont<tamanho; cont++){
        vetor[tamanho] = 90;
    }
    for (cont=0; cont<tamanho; cont++){
        cout << vetor[tamanho] << "\n";
    }
    system("pause");
    return 0;
}








