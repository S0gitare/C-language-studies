#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {

    ofstream meuarquivo;
    meuarquivo.open("arquivo.txt");
    meuarquivo << " ";
    meuarquivo.close();
system("pause");
return 0;
}