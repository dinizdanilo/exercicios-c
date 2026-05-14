#include <stdio.h>

void header() {
    printf("=========================\n");
    printf("=== TRANSPONDO MATRIZ ===\n");
    printf("=========================\n\n");
}

void preencherMatriz(int matrizOriginal[][2]) {
    printf("Digite os 6 valores da matriz 3x2 (linha por linha): \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d%*c", &matrizOriginal[i][j]);
        }
    }
}

void exibirMatrizOriginal (int matrizOriginal[][2]) {
    for (int i = 0; i < 3; i++) {
        printf("|");
        for (int j = 0; j < 2; j++) {
            printf("%4d", matrizOriginal[i][j]);
        }
        printf(" |\n");
    }
}

void transporMatriz(int matrizOriginal[][2], int matrizTransposta[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            matrizTransposta[j][i] = matrizOriginal[i][j];
        }
    }
}

void exibirMatrizTransposta(int matrizTransposta[][3]) {
    for (int i = 0; i < 2; i++) {
        printf("|");
        for (int j = 0; j < 3; j++) {
            printf("%4d", matrizTransposta[i][j]);
        }
        printf(" |\n");
    } 
}

int main(void) {
    header();

    int matrizOriginal[3][2];
    int matrizTransposta[2][3];

    preencherMatriz(matrizOriginal);

    printf("\nMatriz original: \n");
    exibirMatrizOriginal(matrizOriginal);

    transporMatriz(matrizOriginal, matrizTransposta);

    printf("\n\nMatriz transposta: \n");
    exibirMatrizTransposta(matrizTransposta);

    return 0;
}