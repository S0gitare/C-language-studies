//Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas

#include <stdio.h>
#include <stdlib.h>

int main (){

    float N1 , N2;
    int resultado;

    printf("\n--------------------------------------");
    printf("\n      Valor Absoluto das Notas");
    printf("\n--------------------------------------");

    //para inserir os valores e ler as notas
    printf("\n Digite a nota do primeiro semestre: "); 
    scanf("%f", &N1);

    printf("\n Digite a nota do segundo semestre: ");
    scanf("%f", &N2);

    //calcula e mostra a média final
    resultado = (N1 - N2);
    printf("\n O resultado absoluto foi: %d \n", abs(-resultado));

    system("pause");
    return 0;
}