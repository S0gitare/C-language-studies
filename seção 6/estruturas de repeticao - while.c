#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int i = 0;

    while (i <= 10){
        printf("\n %d \n", i);
        i++;

        sleep(1);
    }


    system("pause");
    return 0;
}