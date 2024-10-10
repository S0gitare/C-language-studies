#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stdbool.h>
using namespace std;

int* alocavetor(int tamanho);

int main(){
    int *vetor; int tamanho, cont;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    vetor = alocavetor(tamanho);
    for (cont=0; cont<tamanho; cont++){
        cout << vetor[cont] << "\n";
    }
    system("pause");
    return 0;
}
int* alocavetor(int tamanho){
    int *aux;
    //* Alocação dinamica de memoria
    aux = (int*) malloc(tamanho * sizeof(int));
    return aux;
}







