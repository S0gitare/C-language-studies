#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    char c = 'M';
    printf("O valor de c e igual a = %c \n", c);
    fflush(stdin);
    scanf("%c" , &c);
    printf("O valor de c mudou para: %c  ", c);
}
