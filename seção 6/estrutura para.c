#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main (){

    int i = 0;

    for (i = 0; i <= 10; i++){
    printf(" %d \n", i);
        sleep(1);
    }
    

    system("pause");
    return i;
}