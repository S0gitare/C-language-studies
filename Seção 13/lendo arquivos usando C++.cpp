#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {

    ifstream input ("arquivo.txt");
    string textolido;

    for (string line; getline(input, line);){
        textolido = textolido + line; //* OU textolido += line;
    }

    cout << textolido;
system("pause");
return 0;
}