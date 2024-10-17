#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
#define TAM 10

    void imprime(int vetor[TAM]);
    void insertion_sort(int vetor[TAM]);

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    imprime(vetor);
    insertion_sort(vetor);
    imprime(vetor);

    system("pause");
    return 0;
}
void insertion_sort(int vetor[TAM]){
    int i, j;
    int atual;

    for (i = 1; i < TAM; i++){
        atual = vetor[i];
        j = i - 1;

        while((j >= 0) && (atual < vetor[j])) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = atual;
        imprime(vetor);
    }
}
void imprime(int vetor[TAM]){
    int i;
    for (i = 0; i < TAM; i++) {
        cout << vetor[i] << "|";
    }
    cout << "\n";
}