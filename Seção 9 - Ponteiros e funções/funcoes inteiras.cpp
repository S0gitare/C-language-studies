#include <stdlib.h>
#include <stdio.h>

int retornadez();
float retornaquebrado();

int main(){
    int a; float b;
    a = retornadez();
    printf("Valor da variavel 'a': %d \n", a);
    b = retornaquebrado();
    printf("Valor da variavel 'b': %.2f \n", b);

system("pause");
    return 0;
}

//* Retorna um número inteiro
int retornadez(){
    printf("Chamando funcao...\n");
    return 10;
}
//* Retorna um número quebrado

float retornaquebrado(){
    printf("Chamando funcao quebrada...\n");
    return 3.14536;
    printf("%.3f \n", retornaquebrado());
}