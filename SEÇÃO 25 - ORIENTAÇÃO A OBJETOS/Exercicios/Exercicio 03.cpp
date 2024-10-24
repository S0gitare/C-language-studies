//* Faça um programa com uma classe pessoa que receba informações
//* De nome, idade e salário diretamente na construção do objeto
//* E associe aos campos corretos. Adicione um metodo para imprimir todos os campos

#include <iostream>
#include <string>
using namespace std;

class pessoa{
    public:
    string nome;
    int idade;
    float salario;

    pessoa(string Novonome, int Novaidade, float Novosalario){
        nome = Novonome;
        idade = Novaidade;
        salario = Novosalario;
    }
    void imprime (){
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Salario: " << salario << endl;
    }
};
int main(){
    pessoa pessoa1("Alecsander", 20, 2.545);
    pessoa1.imprime();

    pessoa pessoa2("Monick",21, 2.235);
    pessoa2.imprime();
    return 0;
}