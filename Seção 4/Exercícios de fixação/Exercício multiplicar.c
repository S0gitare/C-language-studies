//Crie um algoritmo que leia 3 números inteiros de uma só vez
//e coloque o resultado da multiplicação entre os 3 em uma variável própria
//depois exiba essa variável

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int N1, N2, N3, resultado;
 
    //lendo os 3 valores
    printf("\n Digite 3 numeros para multiplicar: ");
    scanf("%d %d %d", &N1, &N2, &N3);

    //mostrando a variavel resultado
    resultado = (N1 * N2 * N3);
    printf("\n O resultado da multiplicacao foi: %d \n", resultado);

    system("pause");
    return 0;
}