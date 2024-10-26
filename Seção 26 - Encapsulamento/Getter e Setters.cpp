#include <iostream>
using namespace std;

class pessoa{
    private:
    string nome;

    public:

    string getnome(){
        return nome;
    }
    void setnome(string Nnome){
        nome = Nnome;
    }
};
int main(){
    pessoa p1;
    p1.setnome("Alecsander");
    cout << "Nome: " << p1.getnome() << endl;
    return 0;
}