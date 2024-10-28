#include <string>
using namespace std;

class fruta{
    private:
    float preco;
    string nome;
    
    public:

    fruta(float Npreco, string Nnome){
        setpreco(Npreco);
        setnome(Nnome);
    }
    float getpreco(){
        return preco;
    }
    void setpreco(float Npreco) {
        preco = Npreco;
    }

    string getnome(){
        return nome;
    }
    void setnome(string Nnome){
        nome = Nnome;
    }

};