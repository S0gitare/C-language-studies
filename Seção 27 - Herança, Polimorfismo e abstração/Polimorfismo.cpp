#include <iostream>
using namespace std;

class Animal {
    public:
    void emitirSom(){}
};

class Cachorro: public Animal {
    public:
    void emitirSom(){
        cout << "Au Au!" << endl;
    }
};

class Gato: public Animal {
    public:
    void emitirSom(){
        cout << "Miau!" << endl;
    }
};

int main(){
    Cachorro viralata;
    cout << "Cachorro: ";
    viralata.emitirSom();

    Gato garfield;
    cout << "Gato: ";
    garfield.emitirSom();
    return 0;
}