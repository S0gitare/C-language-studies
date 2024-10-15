#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
#define TAM 10

    void imprime(int vetor[TAM]);
    void bubble_sort(int vetor[TAM]);

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    bubble_sort(vetor);
    imprime(vetor);

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
                imprime(vetor);
                cout << "\n";
                cout << "\n";
            }
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