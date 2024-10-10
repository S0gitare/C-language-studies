#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stdbool.h>
using namespace std;

void imprimevetor(int *vetor, int tamanho);
void modificavetor(int *vetor, int tamanho);
int main(){
    int v [3] = {1,2,3};
    imprimevetor(v, 3);
    modificavetor(v, 3);
    system("pause");
    return 0;
}
void imprimevetor(int *vetor, int tamanho){
    int i;
    for (i=0; i<tamanho; i++){
        cout << vetor[i] << "\n";
    }
}
void modificavetor(int *vetor, int tamanho){
    int i;
    for (i=0; i<tamanho; i++){
        vetor[i] = vetor[i] + 1;
        cout << vetor[i] << "\n";
    }
}





