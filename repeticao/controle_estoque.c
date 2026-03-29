#include <stdio.h>

int main() {
    int qtdProdutos, qtdEmEstoque, qtdMinima;
    char nomeProduto[50];

    printf("Digite a quantidade de produtos a serem cadastrados: ");
    scanf("%d%*c", &qtdProdutos);

    for (int i = 1; i <= qtdProdutos; i++) {
        printf("\nProduto %d:\n", i);
        
        printf("Nome do produto: ");
        scanf("%s%*c", nomeProduto);

        printf("Quantidade em estoque: ");
        scanf("%d%*c", &qtdEmEstoque);

        printf("Estoque mínimo recomendado: ");
        scanf("%d%*c", &qtdMinima);

        if (qtdMinima > qtdEmEstoque) {
            printf("-> O produto '%s' precisa ser reposto! (Estoque: %d, Mínimo: %d)\n", nomeProduto, qtdEmEstoque, qtdMinima);
        }
        else {
            printf("-> O produto '%s' tem estoque suficiente. (Estoque: %d, Mínimo: %d)\n", nomeProduto, qtdEmEstoque, qtdMinima);
        }
    }
}