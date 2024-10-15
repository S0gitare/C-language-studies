#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
#define TAM 10

    void fila_construct(int *frente, int *tras);
    void fila_enfileirar(int fila[TAM], int valor, int *tras);
    void imprime(int vetor[TAM], int tamanho);
    void desenfileirar(int fila[TAM], int *frente, int *tras);

int main(){
    int fila[TAM] = {0, 0, 0, 0, 0, 0, 0, 0,0,0};
    int frente, tras;

    fila_construct(&frente, &tras);
    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 3, &tras);
    fila_enfileirar(fila, 9, &tras);
    fila_enfileirar(fila, 11, &tras);
    imprime(fila, (tras - frente) + 1);

    desenfileirar(fila, &frente, &tras);



    imprime(fila, (tras - frente) + 1);

    system("pause");
    return 0;
}
void fila_enfileirar(int fila[TAM], int valor, int *tras){
    if (*tras == TAM - 1){
        cout << "Fila cheia!";
    }else {
        *tras = *tras + 1;
        fila[*tras] = valor;
    }
    
}
void desenfileirar(int fila[TAM], int *frente, int *tras){
    if (*frente < *tras){
        cout << "\n O valor: " << fila[*frente] << " foi removido. \n";
        fila[*frente] = 0;
        *frente = *frente + 1;
    }
}
void fila_construct(int *frente, int *tras){
    *frente = 0;
    *tras = -1;

}
void imprime(int vetor[TAM], int tamanho){
    int i;

    for (i = 0; i < tamanho; i++) {
        cout << vetor[i] << " - ";
    }
    cout << "\n";
}