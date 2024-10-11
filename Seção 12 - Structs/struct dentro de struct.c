#include <stdio.h>
#include <stdlib.h>

typedef struct data {
    int dia;
    int mes;
    int ano;
}data;
//* Lembrar que strucs não tem parâmetros
struct aluno {
    int id;
    data nascimento;
};

int main(){
    struct aluno aluno1;
    aluno1.id = 54989;
    aluno1.nascimento.dia = 11;
    aluno1.nascimento.mes = 01;
    aluno1.nascimento.ano = 2005;

    printf("\n Nascido em: %d/%d/%d \n", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
    system("pause");
    return 0;
}