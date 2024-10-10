#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stdbool.h>
using namespace std;
bool retornabool();
int main(){

    bool ok;
    ok = retornabool();
    cout << ok << "\n";
    system("pause");
    return 0;
}

bool retornabool() {
    return true;
}