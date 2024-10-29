//* Faça um programa com uma CLASSE ANIMAL com TERRENO, seus getters e setters.
//* Depois uma CLASSE MAMIFERO FILHA DE ANIMAL, com mesesgestação, seus getters e setters.
//* Depois uma CLASSE CACHORRO FILHA DE MAMIFERO, com raça, seus getters e setters e um método para latir.

//* Depois crie UM CACHORRO COM TERRENO, MESESGESTAÇÃO, RAÇA E FAÇA-O LATIR.
//! OBS: Faça primeiro um diagrama UML, depois codifique o programa

#include <iostream>
using namespace std;

class Animal {
    private:
    string terreno;
    public:
    string getTerreno() {
        return terreno;
    }
    void setTerreno(string terreno){
        this->terreno = terreno;
    }
};

class Mamifero: public Animal {
    private:
    int meses_gestacao;
    public:
    int getMeses_Gestacao() {
        return meses_gestacao;
    }
    void setMeses_Gestacao(int meses_gestacao){
        this->meses_gestacao = meses_gestacao;
    }
};

class Cachorro: public Mamifero {
    private:
    string raca;
    public:
    void latir(){
        cout << "Cachorro: Au Au!" << endl;
    }
    string getRaca() {
        return raca;
    }
    void setRaca(string raca){
        this->raca = raca;
    }
};
int main(){
    Cachorro cachorro_brabo;
    cachorro_brabo.setTerreno("Terrestre");
    cout << "Terreno: " << cachorro_brabo.getTerreno() << endl;
    cachorro_brabo.setMeses_Gestacao(3);
    cout << "Meses para nascer: " << cachorro_brabo.getMeses_Gestacao() << endl;
    cachorro_brabo.setRaca("Doberman");
    cout << "Raca: " << cachorro_brabo.getRaca() << endl;
    cachorro_brabo.latir();
    return 0;
}

