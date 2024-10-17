#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <fstream>
using namespace std;
#define TAM 100000

    void selection_sort(int vetor[TAM]);
    void values(int vetor[TAM]);

int main(){
    int vetor[TAM];

    values(vetor);
    selection_sort(vetor);

    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << "|";
    }
    cout << "\n";

    system("pause");
    return 0;
}
void selection_sort(int vetor[TAM]){
    int pmv; //* Posição de menor valor
    int i, j;
    int aux;

    for (i = 0; i < TAM; i++){
        pmv = i;
        for (j = i + 1; j < TAM; j++){
            if (vetor[j] < vetor[pmv]){
                pmv = j;
            }
        }
        if (pmv != i){
            aux = vetor[i];
            vetor[i] = vetor[pmv];
            vetor[pmv] = aux;
        }
    }
}
void values(int vetor[TAM]){
    for (int i = 0; i < TAM; i++){
        vetor[i] = TAM - 1 - i;
    }
}
