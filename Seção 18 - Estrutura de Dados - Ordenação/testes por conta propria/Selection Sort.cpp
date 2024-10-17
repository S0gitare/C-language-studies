#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
#define TAM 10

    void imprime(int vetor[TAM]);
    void selection_sort(int vetor[TAM]);

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    imprime(vetor);
    selection_sort(vetor);
    imprime(vetor);


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
void imprime(int vetor[TAM]){
    int i;
    for (i = 0; i < TAM; i++) {
        cout << vetor[i] << "|";
    }
    cout << "\n";
}