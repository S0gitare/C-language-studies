//* Faça um programa com uma classe funcionário com um MÉTODO VIRTUAL
//* VAZIO ImprimeFuncoes, e crie duas subclasses de sua escolha que imprimam
//* Diferentes funções para cada funcionário.

#include <iostream>
using namespace std;

class Funcionario {
    public:
        virtual void imprimeFuncoes() = 0;
};

class Caixa: public Funcionario {
    public:
    void imprimeFuncoes() {
        cout << "Caixa: Gerencia caixas, lida com pagamentos e baixas." << endl;
    }
};

class Gerente: public Funcionario {
    public:
    void imprimeFuncoes() {
        cout << "Gerente: Gerencia toda a empresa, controla os recursos e atende clientes." << endl;
    }
};

int main(){
    Caixa maria;
    maria.imprimeFuncoes();
    Gerente jose;
    jose.imprimeFuncoes();
    return 0;
}