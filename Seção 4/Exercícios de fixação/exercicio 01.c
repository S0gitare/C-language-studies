//Crie um algorito que leia 2 notas e mostre a média entre elas

#include <stdio.h>
#include <stdlib.h>

int main (){

    float N1 , N2;
    char nome;

    printf("\n----------------------------");
    printf("\n      Media de Notas");
    printf("\n----------------------------");

    //para usuario inserir a inicial do aluno e ler esse nome
    printf("\n Digite a inicial do aluno: ");
    scanf("%c", &nome);

    //para inserir os valores e ler as notas
    printf("\n Digite a nota do primeiro semestre: "); 
    scanf("%f", &N1);

    printf("\n Digite a nota do segundo semestre: ");
    scanf("%f", &N2);

    //calcula e mostra a média final
    printf("\n A media do aluno foi: %f \n", (N1 + N2) /2);
    system("pause");
    return 0;
}