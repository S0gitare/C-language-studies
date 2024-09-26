//programa que calcula uma equação do segundo grau nos 3 casos do delta

//Equações de exemplo:

// 2x² -5x + 3 = 0 //possui duas raízes

// x² - 6x + 9 = 0 //possui apenas 1 raiz

// 7x² + 3x +4 = 0 //não possui raízes

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");
    int a, b, c;
    int delta;
    float X1, X2;

    printf("\n ------------------------------ \n");
    printf("\n Calculo de equacoes do 2° grau \n");
    printf("\n ------------------------------ \n");

    printf("\n Digite o valor de a: ");
    scanf("%d", &a);
    printf("\n Digite o valor de b: ");
    scanf("%d", &b);
    printf("\n Digite o valor de c: ");
    scanf("%d", &c);

    delta = (b * b - 4 * a * c);
    printf("\n O valor do delta é: %d", delta);

    if (delta > 0){
        printf("\n E possui duas raízes reais. \n");
    }else if(delta < 0){
        printf("\n E nao possui raizes reais. \n");
    }else if (delta == 0){
        printf("\n E possui apenas uma raiz real. \n");
    }

    X1 = ((-(b) + sqrt(delta)) / (2 * a));
    X2 = ((-(b) - sqrt(delta)) / (2 * a));

        if (delta > 0){
            printf("\n O valor da primeira raiz é igual a: %f \n", X1);
            printf("\n O valor da segunda raiz é igual a: %f \n", X2);
        }else if (delta < 0){
            printf("\n pois não é possível calcular as raízes. \n");
        }else if (delta == 0){
            printf("\n O valor da raiz é: %f \n", X1);
        }
    system("pause");
    return 0;
}