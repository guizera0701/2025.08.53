#include <stdio.h> 

int main(){

    char nome[50];
    int idade;
    int ingresso;

    printf("==================================\n");
    printf("        Bem-vindo ae evento      ||\n");
    printf("    a seguir informe os dados solicitados   ||\n");
    printf("==================================\n");

    printf("\n");
    printf("informe o seuui nome: \n");
    fflush(stdin);
    fgets(nome, sizeof(nome), stdin);
    printf("informe a sua idade: \n");
    scanf("%d", &idade);
    printf("voce possui ingresso? (1 para sim, 0 para nao): \n");
    scanf("%d", &ingresso);
    printf("\n");

    if (idade >= 18 && ingresso == 1)
    {
        printf("voce esta autorizado a entrar no evento. \n");
    }
    else if (idade < 18 && ingresso == 1)
    {
        printf("voce nao esta autorizado a entrar no evento, pois e menor de idade. \n");
    }
    else if (idade >= 18 && ingresso == 0)
    {
        printf("voce nao esta autorizado a entrar no evento, pois nao possui ingresso.\n");
    }
    else
    {
        printf("voce nao esta autorizado a entrar no evento, pois e menor de idade e nao possui ingresso.\n");
    }

    return 0;
}