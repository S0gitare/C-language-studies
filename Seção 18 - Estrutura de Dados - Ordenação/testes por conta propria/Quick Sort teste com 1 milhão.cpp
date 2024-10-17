#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <fstream>
using namespace std;
#define TAM 100000

    void quick_sort(int vetor[TAM], int inicio, int fim);
    void values(int vetor[TAM]);

int main(){
    int vetor[TAM];

    values(vetor);
    quick_sort(vetor, 0, TAM);

    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << "|";
    }
    cout << "\n";

    system("pause");
    return 0;
}
void quick_sort(int vetor[TAM], int inicio, int fim){
    int L, R;
    int pivo, meio, aux;

    L = inicio;
    R = fim;
    meio = (int) ((L + R) /2);
    pivo = vetor[meio];

    while (R > L) {
        while (vetor[L] < pivo) {
            L++;
        }
        while (vetor[R] > pivo) {
            R = R - 1;
        }
        if (L <= R){
            aux = vetor[L];
            vetor[L] = vetor[R];
            vetor[R] = aux;

            L = L + 1;
            R = R - 1;
        }
    }
    if (inicio < R){
        quick_sort(vetor, inicio, R);
    }else if (L < fim) {
        quick_sort(vetor, L, fim);
    }
}
void values(int vetor[TAM]){
    for (int i = 0; i < TAM; i++){
        vetor[i] = TAM - 1 - i;
    }
}