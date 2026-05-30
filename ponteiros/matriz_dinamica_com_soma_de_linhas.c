#include <stdio.h>
#include <stdlib.h>

void header() {
    printf("==========================================\n");
    printf("=== ALOCACAO DINAMICA E SOMA DE MATRIZ ===\n");
    printf("==========================================\n\n");
}

void preencherMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o numero na posicao %d | %d: ", i, j);
            scanf("%d%*c", &matriz[i][j]);
        }
    }
}

void somarLinhas(int **matriz, int linhas, int colunas) {
    int soma;
    for (int i = 0; i < linhas; i++) {
        soma = 0;
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
        printf("A soma da linha %d eh: %d\n", i, soma);
    }
}

int main(void) {
    header();

    int **matriz;
    int linhas, colunas;

    printf("Digite quantas linhas a matriz vai ter: ");
    scanf("%d%*c", &linhas);

    matriz = (int **) malloc(linhas * sizeof(int *));

    printf("Digite quantas colunas a matriz vai ter: ");
    scanf("%d%*c", &colunas);

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));    
    }

    preencherMatriz(matriz, linhas, colunas);

    somarLinhas(matriz,linhas, colunas);

    for (int i = 0; i < linhas; i++){
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}