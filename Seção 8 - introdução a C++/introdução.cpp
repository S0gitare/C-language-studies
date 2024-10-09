#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    double d;
    float f;
    char c;
    bool e;

    a = 5;
    d = 3.14;
    f = 2.27;
    c = 'a';
    e = true;

    printf("Inteiro: %d \n", a);
    printf("Ponto Flutuante: %.1f \n", d);
    printf("Ponto Flutuante com 3 casas decimais: %.3f \n", f);
    printf("Caractere: %c \n", c);
    printf("Booleano: %d \n", e);

    //* Imprimindo com C++
    cout << "Ola Mundo! \n";

    //* Lendo com C++
    cout << "\n Insira o valor de a: \n";
    cin >> a;
    cout << "\n Valor: " << a << "\n";

    system("pause");
    return 0;
}