//* Faça um programa com uma CLASSE CALCULADORA com dois MÉTODOS para SOMAR
//* Um deles recebe 2 INTEIROS e o outro recebe 3 INTEIROS, o metodo somar recebe os parâmetros
//* E retorna a soma deles.
//* Teste a calculadora somando e exibindo na tela 2 valores e depois 3 valores.

#include <iostream>
using namespace std;

class Calculadora {
    public:
    int N1 = 4, N2 = 5, N3 = 5;

    int somar(int N1, int N2) {
        return N1 + N2;
    }
    int somar(int N1, int N2, int N3) {
        return N1 + N2 + N3;
    }
};
int main() {
    Calculadora Soma;
    cout << "Soma de 2 Valores: " << Soma.somar(4, 5) << endl;
    cout << "Soma de 3 Valores: " << Soma.somar(4, 5, 5) << endl;
    return 0;
}