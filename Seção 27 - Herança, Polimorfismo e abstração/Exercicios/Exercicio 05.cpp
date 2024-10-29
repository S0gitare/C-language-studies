//* Faça um programa com a CLASSE IDIOMA e um método SAUDAR
//* Depois crie 3 subclasses usando polimorfismo para imprimir na tela a saudação em cada idioma
//* Diferente de acordo com o nome da SUBCLASSE.

#include <iostream>
using namespace std;

class Idioma {
    void saudacao(){}
};

class Ingles: public Idioma {
    public:
    void saudacao(){
        cout << "Hello World!" << endl;
    }
};

class Frances: public Idioma {
    public:
    void saudacao(){
        cout << "Bonjour le monde!" << endl;
    }
};

class Portugues: public Idioma {
    public:
    void saudacao(){
        cout << "Ola Mundo!" << endl;
    }
};

int main(){
    Ingles hello;
    cout << "Saudacao em ingles: ";
    hello.saudacao();

    Frances bonjour;
    cout << "Saudacao em frances: ";
    bonjour.saudacao();

    Portugues ola;
    cout << "Saudacao em portugues: ";
    ola.saudacao();
}