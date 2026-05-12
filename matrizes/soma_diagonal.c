#include <stdio.h>

void header() {
    printf("======================================\n");
    printf("=== SOMA DIAGONAL PRINCIPAL MATRIZ ===\n");
    printf("======================================\n\n");
}

void lerMatriz(int matriz[][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o número da linha %d | coluna %d: ", (i + 1), (j + 1));
            scanf("%d%*c", &matriz[i][j]);
        }
    }
}

int somarDiagonal(int matriz[][4]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }

    return soma;
}

int main(void) {
    header();

    int matriz[4][4];
    lerMatriz(matriz);

    int resultado = somarDiagonal(matriz);

    printf("\nSoma da diagonal principal: %d\n", resultado);

    return 0;
}