#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //permite usar acentos
    setlocale(LC_ALL,"");
    printf("Olá");
}