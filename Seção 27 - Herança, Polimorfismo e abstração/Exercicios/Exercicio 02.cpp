//* Programar o diagrama que ele apresenta

#include <iostream>
using namespace std;

class Usuario{
    private:
    string nome;
    string email;
    public:
    string getNome(){
        return nome;
    }
    void setNome(string nome){
        this->nome = nome;
    }

    string getEmail(){
        return email;
    }
    void setEmail(string email){
        this->email = email;
    }
};

class Personagem: public Usuario {
    private:
    int nivel;
    public:
    int getNivel(){
        return nivel;
    }
    void setNivel(int nivel){
        this->nivel = nivel;
    }

    //* Métodos diferentes costumam necessitar de comentários
    //* a menos que o nome seja autoexplicativo
    void aumenta_nivel(){ 
        nivel++;
    }
};
int main(){
    Personagem host;
    host.setNome("Host");
    cout << "Nome: " << host.getNome() << endl;
    host.setEmail("host@example.com");
    cout << "Email: " << host.getEmail() << endl;
    host.setNivel(3);
    cout << "Nivel: " << host.getNivel() << endl;
    host.aumenta_nivel();
    cout << "Novo nivel: " << host.getNivel() << endl;
    return 0;
}