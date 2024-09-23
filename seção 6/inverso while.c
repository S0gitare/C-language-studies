#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int i = 10;

    while (i >= 0){
        printf("\n %d \n", i);
        i = i - 1;

        sleep(1);
    }


    system("pause");
    return 0;
}