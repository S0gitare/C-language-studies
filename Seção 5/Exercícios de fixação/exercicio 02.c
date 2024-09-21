//continuação do exercício 01 só que com condições simpes

#include <stdio.h>
#include <stdlib.h>

int main (){

    float N1 , N2, media;
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
    media = ((N1 + N2) /2);
    printf("\n A média do aluno %s foi: %f ", nome, media);

    if(media >= 5){
        printf("\n Aluno Aprovado \n");
    }else
    {
        printf("\n Aluno reprovado automaticamente no sistema\n");
    }

    system("pause");
    return 0;
}