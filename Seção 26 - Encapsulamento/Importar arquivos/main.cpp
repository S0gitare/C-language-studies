#include <iostream>
#include "fruta.h"
using namespace std;

int main(){
    fruta fruta1(4.2, "Banana");
    cout << "Nome: " << fruta1.getnome() << endl;
    cout << "Preco: " << fruta1.getpreco() << endl;

    return 0;
}

