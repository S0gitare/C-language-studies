//* Faça um programa que leia um sabor informado pelo usuário,
//* Depois com uma classe coxinha, crie a coxinha já atribuindo o sabor informado 
//* Usando metodo construtor com um parâmetro

#include <iostream>
using namespace std;

class coxinha {
    public:
    string sabor;

    coxinha(string sabor_da_coxinha){
        sabor = sabor_da_coxinha;
        cout << "Coxinha criada com sabor: " << sabor << endl;
    }

};

int main(){
    string sabor;
    cout << "Digite o sabor da coxinha: ";
    cin >> sabor;

    coxinha coxinha_do_usuario(sabor);
    cout << "Sabor da coxinha do usuário: " << coxinha_do_usuario.sabor;

    return 0;
}