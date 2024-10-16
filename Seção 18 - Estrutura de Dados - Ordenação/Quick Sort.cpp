#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
#define TAM 10

    void imprime(int vetor[TAM]);
    void quick_sort(int vetor[TAM], int inicio, int fim);

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    imprime(vetor);
    quick_sort(vetor, 0, TAM);
    imprime(vetor);

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
void imprime(int vetor[TAM]){
    int i;
    for (i = 0; i < TAM; i++) {
        cout << vetor[i] << "|";
    }
    cout << "\n";
}