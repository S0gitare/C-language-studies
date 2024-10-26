//* Faça um programa com uma classe CALCULADORA que
//* Faça operações de Soma, Subtração, Divisão e Multiplicação
//* E teste os métodos com exemplos

#include <iostream>
using namespace std;

class calculadora {
    public:

    calculadora(){
        cout << "Calculadora criada!" << endl;
    }
    int soma (int N1, int N2){
        int resultado = (N1 + N2);
        return resultado;
    }
    int subtracao (int N1, int N2){
        int resultado = (N1 - N2);
        return resultado;
    }
    int multiplicacao (int N1, int N2){
        int resultado = (N1 * N2);
        return resultado;
    }
    int divisao (int N1, int N2){
        int resultado = (N1 / N2);
        return resultado;
    }
};

int main(){

    calculadora calc;
    cout << calc.soma(5, 10) << endl;
    cout << calc.subtracao(20, 5) << endl;
    cout << calc.multiplicacao(3, 7) << endl;
    cout << calc.divisao(25, 5) << endl;

    return 0;
}