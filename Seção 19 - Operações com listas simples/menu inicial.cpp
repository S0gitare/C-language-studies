#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
using namespace std;

void limpatela();

struct pessoa {
    string nome;
    int rg; 
};
int main(){
    long long int funcaodesejada = 0;

    pessoa *ponteirosequencial;
    int tamanho_lista = 0;
    pessoa *exemplosequencial = new pessoa[2];
    exemplosequencial[0].nome = "Alecsandro";
    exemplosequencial[0].rg = 2774492;
    exemplosequencial[1].nome = "Joao";
    exemplosequencial[1].rg = 9235842;
    ponteirosequencial = exemplosequencial;
    do {
        cout << "Operacoes \n";
        cout << "1 - Insercao de um node no inicio da lista \n";
        cout << "2 - Insercao de um node no fim da lista \n";
        cout << "3 - Insercao de um node na posicao N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posicao N \n";
        cout << "7 - Procurar um node com o campo RG \n";
        cout << "8 - Imprimir a Lista. \n";
        cout << "9 - Sair do sistema. \n";
        cout << "\nEscolha um numero e pressione ENTER: \n";
        cin >> funcaodesejada;
        limpatela();
    }while (!(funcaodesejada < 10 && funcaodesejada > 0));
    switch (funcaodesejada) {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;
        default:
            cout << "Funcao invalida. \n";
            break;
    }






    return 0;
}
void limpatela(){
    system("CLS");
}