#include <stdio.h>
#include <stdlib.h>

#define TAM 2

int main(){
    int vetordeint[] = {1,2,3,4}; //* Definindo sem tamanho
    float vetordefloat[3] = {3.14, 27.28, 3.0}; //* Definindo tamanho com número
    char vetordechar[TAM] = {'a', 'b'}; //* Definindo tamanho com constante

    //* Modificando valor por posição
    vetordeint [0] = 9;

    //* Modificando valor com variável
    float novovalor = 5.0;
    vetordefloat[1] = novovalor;

    printf("\n Digite uma letra nova: ");
    fflush(stdin);
    scanf("%c", &vetordechar[0]);


}