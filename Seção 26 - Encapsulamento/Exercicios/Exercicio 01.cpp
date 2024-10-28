//* Faça um programa com uma classe celular
//* Com os atributos: Marca e Preço. 
//* Use encapsulamento e adicione os respectivos getters e setters.

#include <iostream>
using namespace std;

class Celular {
    private:
    string marca;
    float preco;

    public:
    Celular(){
        marca = "";
        preco = 0;
    }
    Celular (string Nmarca){
        set_marca(Nmarca);
    }
    Celular (float Npreco){
        set_preco(Npreco);
    }
    Celular (string Nmarca, float Npreco){
        set_marca(Nmarca);
        set_preco(Npreco);
    }

    string get_marca() {
        return marca;
    }
    void set_marca(string Nmarca){
        marca = Nmarca;
    }


    float get_preco() {
        return preco;
    }
    void set_preco(float Npreco){
        preco = Npreco;
    }
};


int main(){

    Celular Samsung1;
    cout << "Calular Marca: " << Samsung1.get_marca() << endl;
    cout << "Calular Preco: " << Samsung1.get_preco() << endl;

    Celular Motorola("Morotola");
    cout << "Celular Marca:" << Motorola.get_marca() << endl;
    cout << "Celular Preco:" << Motorola.get_preco() << endl;

    Celular Xialmi(2300.0);
    cout << "Celular Marca:" << Xialmi.get_marca() << endl;
    cout << "Celular Preco:" << Xialmi.get_preco() << endl;

    Celular Apple("Apple", 5200.0);
    cout << "Celular Marca:" << Apple.get_marca() << endl;
    cout << "Celular Preco:" << Apple.get_preco() << endl;

    return 0;
}