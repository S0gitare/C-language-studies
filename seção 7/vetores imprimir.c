#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(){
    int vetor[TAM] = {1, 2, 3, 4, 5};
    int i = 0;

    for (i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }

    system("pause");
    return 0;
}