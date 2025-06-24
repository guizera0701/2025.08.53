//  Faça um programa que peça para o usuário digitar diversos números inteiros até que um dos números seja negativo.

#include <stdio.h>

int main(){

    int numero;
  
    do
    {
        printf("digite um numero ");
        scanf("%d", &numero);
    } while (numero >= 0);
    printf("fim do programa ");
    
}