#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <fstream>
using namespace std;
#define TAM 100000

    void shell_sort(int vetor[TAM]);
    void values(int vetor[TAM]);

int main(){
    int vetor[TAM];

    values(vetor);
    shell_sort(vetor);

    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << "|";
    }
    cout << "\n";

    system("pause");
    return 0;
}
void shell_sort(int vetor[TAM]){
    int i, j;
    int atual;
    int h = 1;

    while (h < TAM){
        h = 3*h + 1;
    }
    while (h > 1){
        h = h/3;

        for (i = 1; i < TAM; i++){
            atual = vetor[i];
            j = i - h;

            while((j >= 0) && (atual < vetor[j])) {
                vetor[j + h] = vetor[j];
                j = j - h;
            }
            vetor[j + h] = atual;
        }
    }
}
void values(int vetor[TAM]){
    for (int i = 0; i < TAM; i++){
        vetor[i] = TAM - 1 - i;
    }
}