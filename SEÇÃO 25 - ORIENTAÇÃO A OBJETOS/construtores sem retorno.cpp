#include <iostream>
using namespace std;

class pessoa {
    public:
    string nome;

    pessoa(string novoNome){
        cout << "Pessoa criada com nome " << endl;
        nome = novoNome;
    }
    void fala(string frase){
        cout << nome << "diz: " << frase << endl;
    }
    void grita(){
        cout << "AAAAAHHH" <<endl;
    }
};

int main(){
    pessoa p1("João");
    p1.fala("Eai, mano!");
    p1.grita();
    return 0;
}