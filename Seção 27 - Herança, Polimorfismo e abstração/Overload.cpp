#include <iostream>
using namespace std; 

class Impressora {
    public: 
    void imprime(string texto){
        cout << "Frase: " << texto << endl;
    }
    void imprime(float reais){
        cout << "R$ " << reais << endl;
    }
};

int main(){
    Impressora hp_smart;
    hp_smart.imprime("Nossa impressoa apresentou os melhores resultados do mercado!");
    cout << "E custa apenas: ";
    hp_smart.imprime(123.45);
    return 0;
}