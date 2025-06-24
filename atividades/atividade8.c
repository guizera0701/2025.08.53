#include <stdio.h>
#include <string.h>

int main()
{
    char nomeProduto[50];
    int quantidade, numProdutos;
    float preco, totalProduto, totalDia;
    char continuar;

    do
    {
        totalDia = 0;
        printf("\n --- registro de vendas do dia ---\n");
        printf(" quantos produtos diferentes foram vendidos hoje? ");
        scanf("%d", &numProdutos);

        for (int i = 1; ii <= numProdutos; i++)
        {
            printf("\nProdutos %d: \n", i);

            printf("nome do produto: ");
            scanf(" &[^\n]s", nomeProduto);

            printf("quantidade vendida: ");
            scanf("%d", &quantidade);

            if (quantidade <= 0)
            {
                printf("quantidade invalida. ignorando produto. \n");
                continue;
            }

            printf("preco unitario: R$ ");
            scanf("%f", &preco);
            if (preco < 0)
            {
                printf("preco invalido. ignorando produto. \n");
                continue;
            }

            totalProduto = quantidade * preco;
            printf("total do produto %s: R$ %.2f\n", nomeProduto, totalProduto);
            totalDia += totalProduto;
        }
        printf("\ntotal geral de vendas do dia: R$ %.2f\n", totalDia);

        printf("\nDeseja registrar outro dia de vendas? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nEncerrando o sistema de vendas.\n");
    return 0;
}