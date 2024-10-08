#include <stdio.h>
#include <stdlib.h>

int main(){
    //* Definindo strings de várias formas
    char palavra1[] = "Boi";
    char palavra2[5] = "bala";
    char palavra3[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0'};
    char palavra4[5] = { 'f', 'o', 'n', 'e', '\0'};

    //* Imprimindo strings (sem espaços)
    printf(" %s %s %s %s \n", palavra1, palavra2, palavra3, palavra4);

    //* lendog uma string (sem espaços)
    printf("\n Digite uma palavra de ate 4 letras: ");
    fflush(stdin);
    scanf("%s", palavra2);
    printf("%s \n", palavra2);

    //* Lendo uma string (com espaços)
    char fruta[255];
    fflush(stdin);
    printf("\n Digite uma fruta: ");
    fgets(fruta, sizeof(fruta), stdin);

    //* Imprimindo a fruta lida
    printf("\n A fruta digitada foi: %s \n", fruta);
    puts(fruta);

    system("pause");
    return 0;
}