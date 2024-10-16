#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
#define TAM 10

    void imprime(int vetor[TAM]);
    void shell_sort(int vetor[TAM]);

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    imprime(vetor);
    shell_sort(vetor);
    imprime(vetor);

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
void imprime(int vetor[TAM]){
    int i;
    for (i = 0; i < TAM; i++) {
        cout << vetor[i] << "|";
    }
    cout << "\n";
}