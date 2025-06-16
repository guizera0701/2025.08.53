// Faça um programa que peça ao usuário digitar um número inteiro e indique se o número digitado é positivo, negativo ou nulo.

#include <stdio.h>

int main()
{
    // variaveis
    float numero;

        printf("digite um numero inteiro ");
        scanf("%f", &numero);

            if(numero > 0) {
                printf("positivo\n");  
           
            } else if (numero == 0){
                printf("nulo\n");
            
            }else if (numero < 0) {
                printf("negativo\n");
            }
            return 0;
            
             
}