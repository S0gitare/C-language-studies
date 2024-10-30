#include <iostream>
using namespace std;

class FormaGeometrica{
    protected:
    int largura, altura;
    public:
    virtual int area() = 0;

    void setLargura(int largura) {this->largura = largura;}
    void setAltura(int altura) {this->altura = altura;}
};

class Retangulo: public FormaGeometrica {
    public:
    int area() { return (largura * altura); }
};

class Triangulo: public FormaGeometrica {
    public:
    int area() { return ((largura * altura) /2); }
};

int main() {
    Retangulo ret;
    ret.setLargura(5);
    ret.setAltura(5);
    cout << "Area do Retangulo: " << ret.area() << endl;

    Triangulo tri;
    tri.setLargura(5);
    tri.setAltura(5);
    cout << "Area do Triangulo: " << tri.area() << endl;
    return 0;
}