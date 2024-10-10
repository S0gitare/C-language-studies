#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stdbool.h>
using namespace std;
void mostrasucessor(int numero);
int retornaantecessor(int numero);
int main(){
    int a;
    cout << "\n Digite um numero inteiro: \n";
    cin >> a;
    mostrasucessor(a);
    cout << "\n O antecessor de " << a << " eh igual a: " << retornaantecessor(a) << "\n";
    system("pause");
    return 0;
}

void mostrasucessor(int numero){
    cout << "\n O sucessor de " << numero << " eh igual a: " << numero + 1 << "\n";
}
int retornaantecessor(int numero){
    return numero - 1;
}



