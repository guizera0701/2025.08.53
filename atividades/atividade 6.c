// Faça um programa que peça ao usuário digitar três números reais e imprima o maior número digitado.
/////////////////////// Caso os valores sejam iguais, qualquer um deles pode ser impresso.

#include <stdio.h>

int main()
{

    // variaveis
    int numero1;
    int numero2;
    int numero3;

    printf("digite o primeiro numero\n");
    scanf("%d", &numero1);

    printf("digite o segundo numero\n");
    scanf("%d", &numero2);

    printf("digite o terceiro numero\n");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3)
    {
        printf("maior numero digitado: %d", numero1);
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        printf("maior numero digitado: %d", numero2);
    }
    else if (numero3 > numero1 && numero3 > numero2)
    {
        printf("maior numero digitado: %d", numero3);
    }
    else if (numero1 == numero2 || numero1 == numero3)
    {
        printf("este numero e igual a todos: %d", numero1);
    }
    else if (numero2 == numero1 || numero2 == numero3)
    {
        printf("este numero e igual a todos: %d", numero2);
    }
    else if (numero3 == numero1 || numero3 == numero2)
    {
        printf("este numero e igual a todos: %d", numero3);  
    }

    return 0;
}