#include <stdio.h>

void header() {
    printf("=====================================\n");
    printf("=== VERIFICANDO MATRIZ IDENTIDADE ===\n");
    printf("=====================================\n\n");
}

void preencherMatriz(int matriz[][4]) {
    printf("Digite os 16 valores da matriz 4x4 (linha por linha): \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d%*c", &matriz[i][j]);
        }
    }
}

void exibirMatriz(int matriz[][4]) {
    for (int i = 0; i < 4; i++) {
        printf("|");
        for (int j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf(" |\n");
    }
}

int verificarIdentidade(int matriz[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                if (matriz[i][j] != 1) {
                    return 0;
                }
            }
            else {
                if (matriz[i][j] != 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main(void) {
    header();

    int matriz[4][4];
    preencherMatriz(matriz);

    exibirMatriz(matriz);

    if (verificarIdentidade(matriz)) {
        printf("A matriz eh uma Matriz Identidade!\n");
    } 
    else {
        printf("A matriz nao eh uma Matriz Identidade.\n");
    }


    return 0;
}