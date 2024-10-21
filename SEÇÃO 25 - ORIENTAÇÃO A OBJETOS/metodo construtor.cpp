#include <iostream>
using namespace std;

class cookie {
    public:
    float preco;
    string sabor;
    string formato;

    cookie (){
        cout << "Cookie Criado!" << "\n";
        formato = "Redondo";
    };
};

int main(){
    cookie cookie1;
    cookie1.preco = 10.89;
    cookie1.sabor = "Chocolate";

    cout << "Cookie 1: " << cookie1.sabor << "\n";
    cout << "Preco: " << cookie1.preco << "\n";
    cout << "Formado: " << cookie1.formato << "\n";

    system("pause");
    return 0;
}