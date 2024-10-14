#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
#define TAM 10

int simpleSearch(int vetor[TAM], int search, int *encontrado);
int binario(int vetor[TAM], int search, int *encontrado);
void imprime(int vetor[TAM]);

int main(){

    int vetor[TAM] = {1,23,44,56,63,72,84,90,98,103};
    int search;
    int encontrado;
    int option;

    imprime(vetor);
    cout << "\n Qual numero deseja encontrar? ";
    cin >> search;
    cout << "\n Qual o metodo que deseja usar?";
    cout << "\n [1]-Busca Simples";
    cout << "\n [2]-Busca Binaria\n";
    cin >> option;

    switch (option){
    case 1:
        if (simpleSearch(vetor, search, &encontrado) == true) {
        cout << "\n Valor encontrado! \n";
        cout << "\n Encontrado na posicao: " << encontrado << "\n";
        } else{
        cout << "Error \n";
        }
        break;
    
    case 2:
        if (binario(vetor, search, &encontrado) == true) {
        cout << "\n Valor encontrado! \n";
        cout << "\n Encontrado na posicao: " << encontrado << "\n";
        } else{
        cout << "Error \n";
        }
        break;
    default:
        cout << "\n Opcao invalida \n";
        break;
    }

    system("pause");
    return 0;
}

int simpleSearch(int vetor[TAM], int search, int *encontrado){
    int i;
    bool found = false;
    for (i = 0; i < TAM; i++) {
        if (vetor[i] == search) {
            found = true;
            *encontrado = i;
        }
    }
    if (found == true) {
        return 1;
    } else {
        return 0;
    }
}
int binario(int vetor[TAM], int search, int *encontrado){
    int left = 0;
    int right = TAM - 1;
    int meio;

    while(left <= right){


        meio = (left + right) / 2;
        if (vetor[meio] == search) {
            *encontrado = meio;
            return 1;
        }else if (vetor[meio] < search){
            left = meio + 1;
        }else {
            right = meio - 1;
        }
    }
    return 0;
}
void imprime(int vetor[TAM]){
    int i;

    for (i = 0; i < TAM; i++) {
        cout << vetor[i] << " - ";
    }
}