#include <stdio.h>

void header() {
    printf("=====================================\n");
    printf("=== SOMANDO VALORES DE UMA MATRIZ ===\n");
    printf("=====================================\n\n");
}

void headerDois() {
    printf("\n\n=====================================\n");
    printf("======= VALOR TOTAL ARRECADADO ======\n");
    printf("=====================================\n");
}

void preencherMatriz(float matriz[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor arrecadado da agência %d | Dia %d: ", (i + 1), (j + 1));
            scanf("%f%*c", &matriz[i][j]);
        }
        printf("\n");
    }
}

float calcularValorArrecadado(float matriz[2][3]) {
    float total = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            total += matriz[i][j];
        }
    }

    return total;
}

int main() {
    float valores[2][3];
    float totalArrecadado;
    
    header();

    preencherMatriz(valores);
    
    totalArrecadado = calcularValorArrecadado(valores);

    headerDois();
    printf("%.2f\n", totalArrecadado);

    return 0;
}