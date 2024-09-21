//Crie um algorito que leia 2 notas e mostre a média entre elas

#include <stdio.h>
#include <stdlib.h>

int main (){

    float N1 , N2;
    char nome [100]; //declara um array de caracteres para armazenar uma string

    printf("\n----------------------------");
    printf("\n      Media de Notas");
    printf("\n----------------------------");

    printf("\n Digite o nome completo do aluno: ");
    fgets(nome, sizeof(nome), stdin); //lê s string armazenada com espaços

    //para inserir os valores e ler as notas
    printf("\n Digite a nota do primeiro semestre: "); 
    scanf("%f", &N1);

    printf("\n Digite a nota do segundo semestre: ");
    scanf("%f", &N2);

    //calcula e mostra a média final
    printf("\n A media do aluno %s foi: %f \n", nome, (N1 + N2) /2);
    system("pause");
    return 0;
}