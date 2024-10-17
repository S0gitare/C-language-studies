#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <fstream>
using namespace std;
#define TAM 100000

    void insertion_sort(int vetor[TAM]);
    void values(int vetor[TAM]);

int main(){
    int vetor[TAM];

    values(vetor);
    insertion_sort(vetor);

    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << "|";
    }
    cout << "\n";

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
    }
}
void values(int vetor[TAM]){
    for (int i = 0; i < TAM; i++){
        vetor[i] = TAM - 1 - i;
    }
}
