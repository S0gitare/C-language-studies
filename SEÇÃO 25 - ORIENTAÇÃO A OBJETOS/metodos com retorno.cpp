#include <iostream>
using namespace std;

class calculadora {
    public:

    calculadora (){
        cout << "Calculadora Criada!" << endl;
    }
    int soma(int N1, int N2){
        int resultado = (N1 + N2);
        return resultado;
    }
};

int main(){
    calculadora minhacalculadora;
    cout << minhacalculadora.soma(10,6);
    return 0;
}