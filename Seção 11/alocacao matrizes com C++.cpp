#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int numerodelinhas, numerodecolunas, i, j;

    cout << "Digite o numero de linhas: ";
    cin >> numerodelinhas;
    cout << "Digite o numero de colunas: ";
    cin >> numerodecolunas;

    cout << "Tamanho de Linhas:" << numerodelinhas << "\n";
    cout << "Tamanho de Colunas:" << numerodecolunas << "\n";

    int **matriz;
    matriz = (int **) new int [numerodelinhas];

    for (i = 0; i < numerodelinhas; i++){
        matriz[i] = (int *) new int [numerodecolunas];
    }
    for (i = 0; i < numerodelinhas; i++){
        for (j = 0; j < numerodecolunas; j++){
            matriz[i][j]= i;
            cout << " " << matriz[i][j];
        }
        cout << "\n";
    }

    system("pause");
    return 0;
}