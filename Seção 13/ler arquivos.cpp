#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    int c;

    FILE *file;
    file = fopen("arquivo.txt", "r");
    if (file){
        while ((c = getc(file)) != EOF){
            printf("%c", c);
        }
        fclose(file);
    }
system("pause");
return 0;
}