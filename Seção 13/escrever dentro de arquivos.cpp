#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;

int main(){

    ofstream outfiles;
    outfiles.open("arquivo.txt", std::ios_base::app);
    outfiles << "\n Hello World! \n";
    outfiles.close();
    system("pause");
    return 0;
}