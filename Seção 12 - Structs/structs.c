#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct palavra {
    int ordem;
    char letra;
    char texto [256];
};

int main() {

    struct palavra primeirocontato;
    primeirocontato.ordem = 1;
    primeirocontato.letra = 'a';
    strcpy(primeirocontato.texto, "hello world");

    printf("\n Ordem: %d", primeirocontato.ordem);
    printf("\n Letra: %c", primeirocontato.letra);
    printf("\n Texto: %s", primeirocontato.texto);






    system("pause");
    return 0;
}