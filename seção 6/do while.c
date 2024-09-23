#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int i = 10;

    do {

        printf("\n vai ser executado pelo menos uma vez! \n");
        printf("\n mesmo que a condicao seja falsa. \n");
    }while (i < 5);

    system("pause");
    return 0;
}