//* Faça um programa com uma classe cachorro que tem 
//* Uma raça e seja possível criar um cachorro já informando a raça
//* Ou então sem informar. Se não informar, atribua a raça "Viralatinha"

#include <iostream>
using namespace std;

class cachorro{
    public:
    string raca;

    cachorro(){
        raca = "viralatinha";
        
    }
    cachorro(string Nraca){
        raca = Nraca;
    }
};

int main(){

    cachorro c1 ("Golden Retriever");
    cout << "Raça do primeiro cachorro: " << c1.raca << endl;

    cachorro c2;
    cout << "Raça do segundo cachorro: " << c2.raca << endl;
    
}