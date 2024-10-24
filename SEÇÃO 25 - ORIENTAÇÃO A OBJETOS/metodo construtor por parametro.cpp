#include <iostream>
using namespace std;

class pessoa {
    public: 
    string nome; 
    string atributo; 

    pessoa(string newName){
        cout << "Pessoa criada! ";
        nome = newName;
        cout << endl;
    }

};

int main(){

    pessoa pessoa1("Mario");
    cout << "pessoa1: " <<  pessoa1.nome;
    cout << endl;

    pessoa pessoa2("Joao");
    cout << "pessoa2: " << pessoa2.nome;
    cout << endl;

    system("pause");
    return 0;
}