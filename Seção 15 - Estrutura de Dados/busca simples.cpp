#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <stdbool.h>
using namespace std;
#define TAM 10

int simpleSearch(int vetor[TAM], int search);

int main(){

    int vetor[TAM] = {1,23,44,56,63,72,84,90,98,103};
    int search;
    int i;

    for (i = 0; i < TAM; i++) {
        cout << vetor[i] << " - ";
    }

    cout << "\n Qual numero deseja encontrar? \n";
    cin >> search;

    simpleSearch(vetor, search);

    if (simpleSearch(vetor, search) == true) {
        cout << "Valor encontrado! \n";
    } else{
        cout << "Error \n";
    }

    system("pause");
    return 0;
}

int simpleSearch(int vetor[TAM], int search){
    int i;
    bool found = false;
    for (i = 0; i < TAM; i++) {
        if (vetor[i] == search) {
            found = true;
        }
    }
    if (found == true) {
        return 1;
    } else {
        return 0;
    }
}