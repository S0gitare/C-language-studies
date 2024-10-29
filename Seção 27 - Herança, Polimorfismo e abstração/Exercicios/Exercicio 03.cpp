//* FAÇA UM PROGRAMA COM UMA CLASSE PESSOA COM NOME E CPF, SEUS GETTERS E SETTERS. 
//* DEPOIS UMA CLASSE PROFESSOR SUBCLASSE DE PESSOA COM SALÁRIO, SEUS GETTERS E SETTERS. 
//* A CLASSE PROFESSOR DEVE TER 2 MÉTODOS CONSTRUTORES, UM QUE NÃO RECEBE PARÂMETROS E UMA QUE RECEBE NOME, CPF E SALÁRIO.
//* DEPOIS CRIE UMA PESSOA COM NOME E CPF E CRIE UM FUNCIONÁRIO COM NOME, CPF E SALÁRIO.

//! OBS.: FAÇA PRIMEIRO UM DIAGRAMA UML, DEPOIS CODIFIQUE O PROGRAMA."

#include <iostream>
using namespace std;

class pessoa {
    private:
    string nome;
    int cpf;
    public:
    string getNome(){return nome;}
    void setNome(string nome){
        this->nome = nome;
    }
    int getCpf(){return cpf;}
    void setCpf(int cpf){
        this->cpf = cpf;
    }
};
class Professor: public pessoa {
    private:
    float salario;
    public:
    float getSalario(){return salario;}
    void setSalario(float salario){
        this->salario = salario;
    }

    void cria_funcionario(){}

    void cria_funcionario(string nome, int cpf, float salario){
        setNome("Bruno Augusto");
        setCpf(73378159138);
        setSalario(1412.00);
        cout << "Nome: " << getNome() << endl;
        cout << "CPF: " << getCpf() << endl;
        cout << "Salario: " << getSalario() << endl;
    }
    
};
int main(){
    Professor prof;
    cout << "Funcionario: " << endl;
    prof.cria_funcionario("Bruno Augusto", 73378159138, 1412.00);
    return 0;
}