#include <iostream>
using namespace std;

class pessoa {
    public: 
    string nome;
    int idade;

    pessoa (){
        cout << "Pessoa Criada sem nome e sem idade " << endl;
    }
    pessoa (string nomeNovo){
        cout << "Pessoa criada apenas com nome" << endl;
        nome = nomeNovo;
    }
    pessoa (int novaidade){
        cout << "Pessoa criada apenas com idade" << endl;
        idade = novaidade;
    }
    pessoa (string nomeNovo, int novaidade) {
        cout << "Pessoa criada com nome e idade" << endl;
        nome = nomeNovo;
        idade = novaidade;
    }
};

int main(){

    pessoa pessoa1;
    cout << "pessoa1: " << pessoa1.nome << pessoa1.idade << endl;

    pessoa pessoa2("Davi");
    cout << "pessoa2: " << pessoa2.nome << pessoa2.idade << endl;
    
    pessoa pessoa3(25);
    cout << "pessoa3: " << pessoa3.nome << pessoa3.idade << endl;

    pessoa pessoa4("Alice", 30);
    cout << "pessoa4: " << pessoa4.nome << pessoa4.idade << endl;

    system("pause");
    return 0;
}