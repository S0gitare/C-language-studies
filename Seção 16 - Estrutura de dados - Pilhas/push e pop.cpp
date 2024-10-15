#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
#define TAM 10

void imprime(int vetor[TAM]);
void push_pilha(int pilha[TAM], int valor, int *topo);
void pop_pilha(int pilha[TAM], int *topo);

int main(){
    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = - 1;

    imprime(pilha);

    push_pilha(pilha, 5, &topo);
    imprime(pilha);

    push_pilha(pilha, 7, &topo);
    imprime(pilha);

    pop_pilha(pilha, &topo);
    imprime(pilha);

    system("pause");
    return 0;
}
void push_pilha(int pilha[TAM], int valor, int *topo){

    if (*topo == TAM - 1){
        cout << "Pilha cheia!";
    }else {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
    cout << "\n";
}
void pop_pilha(int pilha[TAM], int *topo){
    if (*topo == -1){
        cout << "Pilha ja esta vazia!";
    }else {
        cout << "\n valor removido: " << pilha[*topo] << "\n";
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
    cout << "\n";
}
void imprime(int vetor[TAM]){
    int i;

    for (i = 0; i < TAM; i++) {
        cout << vetor[i] << " - ";
    }
    cout << "\n";
}


