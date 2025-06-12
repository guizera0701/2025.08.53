/*
Faça um programa que calcula e imprime na tela a velocidade de um objeto.
Os dados (distância e tempo) devem ser informados pelo usuário. Dica: lembre que v = d/t.

*/

#include <stdio.h>
#include <math.h>

int main()
{
    // variaveis

    float distância;
    float velocidade, tempo;

    printf("informe a distancia percorrida");
    scanf("%f", &distância);

    printf("informe o tempo ocorrido");
    scanf("%f", &tempo);

    velocidade = distância/tempo;

    printf("velocidade %f", velocidade);
    
}
