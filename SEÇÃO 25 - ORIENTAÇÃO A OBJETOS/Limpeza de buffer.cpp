#include <iostream>
using namespace std;

#include <ios>
#include <limits>

int main(){
    char frase[1024];
    cout << "Digite uma frase: \n";
    cin.sync();
    cin.getline(frase, 1024);
    cout << "Frase Digitada:" << frase << "\n";

    cout << "Digite uma nova frase: \n";
    cin.sync();
    cin.getline(frase, 1024);
    cout << "Nova Frase Digitada:" << frase << "\n";

    system("pause");
    return 0;
}