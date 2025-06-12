// Faça um programa que leia três coeficientes reais a, b e c de uma equação do segundo grau e informe na tela as suas raízes (considere para teste apenas valores que resultem em raízes reais).
// Dica: utilize a fórmula de Bhaskara.

#include <stdio.h>
#include <math.h>

int main()
{
    // variaveis
    double a, b, c;
    double delta;
    double x1, x2;

    printf("informe o vaalor a \n");
    scanf("%lf", &a);

    printf("informe o valor b \n");
    scanf("%lf", &b);

    printf("informe o valor c \n");
    scanf("%lf", &c);

    printf("\n");

    delta = (b * b) - (4 * a * c);

    if (delta >= 0){
        if (delta == 0) {
            x1 =  -b / (2 * a);
            printf("a equacao possui uma raiz real (ou duas iguais): %.2f\n", x1);
        } else{
            x1 =(-b + sqrt(delta)) / (2 * a);
            x2 =(-b - sqrt(delta)) / (2 * a);
            printf("a equacao possui duas raizes distinta: %.2f e %.2f\n", x1 ,x2);
        }
    } else {
        printf("a equacao nao possui raizes reais (dela < 0). \n");
    }
    return 0;
}   