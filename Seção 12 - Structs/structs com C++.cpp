#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <new>
using namespace std;

struct fruta{
    string cor;
    string nome;
};                                      //* lembrar do ponto e virgula depois de fechar as structs

int main(){
    fruta *primeirafruta = new fruta;

    primeirafruta -> cor = " Amarela ";
    primeirafruta -> nome = " Manga ";
    cout << "\n Fruta:" << primeirafruta -> nome << "\n cor da fruta:" << primeirafruta-> cor << "\n"; 

    fruta *listadefrutas = new fruta[2];
    listadefrutas[0].cor = " Vermelha ";
    listadefrutas[0].nome = " Acerola ";
    listadefrutas[1].cor = " Verde ";
    listadefrutas[1].nome = " Abacate ";

    int cont;
    for (cont = 0; cont < 2; cont++){
        cout << "\n Fruta:" << listadefrutas[cont].nome << "\n cor da fruta:" << listadefrutas[cont].cor << "\n";
    }

system("pause");
return 0;
}