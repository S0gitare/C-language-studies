#include <iostream>
using namespace std;

class pessoa{
    public: //* Modificador de Acesso
    int idade; //* Atributo de idade
    string nome; //* Atributo de nome
};

int main(){
    pessoa pessoa1; //* Cria o objeto
    pessoa1.idade = 25;
    pessoa1.nome = "Alecsandro";
    cout << "Nome: " << pessoa1.nome <<"\n";
    cout << "Idade: " << pessoa1.idade <<"\n";

    system("pause");
    return 0;
}