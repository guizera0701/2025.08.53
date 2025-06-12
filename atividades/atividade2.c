// Faça um programa que leia três caracteres do teclado e informe na tela a palavra formada pelos três caracteres em ordem inversa de entrada separados pelo caractere ‘-’.
#include <stdio.h>

int main(){

// variaveis
char caractere1;
char caractere2;
char caractere3;

printf("informe o primeiro caractere \n");
scanf(" s%c", &caractere1);

printf("informe o segundo caractere \n");
scanf(" %c", &caractere2);

printf("informe o terceiro caractere \n");
scanf(" %c", &caractere3);

printf("%c, %c, %c\n", caractere3, caractere2, caractere1); 
}