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

class Brasileiro: public pessoa{
    private: 
    string nacionalidade;

    public:

    string get_nacionalidade(){
        return nacionalidade;
    }
    void set_nacionalidade(string nacionalidade){
        this-> nacionalidade = nacionalidade;
    }
};
int main(){
    pessoa p1;
    p1.setnome("Alecsander");
    cout << "Nome: " << p1.getnome() << endl;

    Brasileiro carioca;
    carioca.set_nacionalidade("Brasileiro");
    cout << "Nacionalidade: " << carioca.get_nacionalidade() << endl;
    return 0;
}