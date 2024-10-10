#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stdbool.h>
using namespace std;

void soma(int a, int b);
int main(){
    int a = 5; int b = 7;
    soma(a,b);
    system("pause");
    return 0;
}
void soma(int a, int b){
    cout << "\n A soma entre " << a << " e " << b << " eh igual a: " << a + b << "\n";
}





