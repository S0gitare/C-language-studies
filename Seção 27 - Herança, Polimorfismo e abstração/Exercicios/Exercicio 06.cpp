//* Faça um programa com uma CLASSE MENU com um método MostraOpcoes()
//* E duas SUBCLASSES MenuCliente e MenuAdministrador mostrando
//* Opções de acesso ao sistema diferentes.

#include <iostream>
using namespace std;

class Menu {
    public: 
    void MostraOpcoes(){}
};

class MenuCliente: public Menu {
    public:
    void MostraOpcoes(){
        cout << "Opcoes do Menu para Cliente:" << endl;
        cout << "1 - Visualizar Pedidos" << endl;
        cout << "2 - Fazer Pedido" << endl;
        cout << "3 - Finalizar Sessão" << endl;
    }
};

class MenuAdministrador: public Menu {
    public:
    void MostraOpcoes(){
        cout << "Opcoes do Menu para Administrador:" << endl;
        cout << "1 - Visualizar Pedidos" << endl;
        cout << "2 - Fazer Pedido" << endl;
        cout << "3 - Finalizar Sessao" << endl;
        cout << "4 - Gerenciar Usuarios" << endl;
        cout << "5 - Gerenciar Produtos" << endl;
        cout << "6 - Relatorios" << endl;
    }
};

int main(){
    MenuCliente cliente;
    cliente.MostraOpcoes();

    MenuAdministrador admin;
    admin.MostraOpcoes();
    return 0;
}