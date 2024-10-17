#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <fstream>
using namespace std;
#define TAM 100

    void bubble_sort(int vetor[TAM]);
    void values(int vetor[TAM]);

int main(){
    int vetor[TAM];

    values(vetor);
    bubble_sort(vetor);

    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << "|";
    }
    cout << "\n";

    system("pause");
    return 0;
}
void bubble_sort(int vetor[TAM]){
    int x,y;
    int aux;

    for (x = 0; x < TAM; x++){
        for (y = 0; y < TAM; y++){
            if (vetor[y] > vetor[x]){
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
                cout << "\n";
                cout << "\n";
            }
        }
    }
}
void values(int vetor[TAM]){
    for (int i = 0; i < TAM; i++){
        vetor[i] = TAM - 1 - i;
    }
}
