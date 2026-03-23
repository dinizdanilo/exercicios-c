#include <stdio.h>

int main() {
    int qtdGols;

    printf("Digite a quantidade de gols na temporada: ");
    scanf("%d%*c", &qtdGols);

    if (qtdGols > 10) {
        printf("Excelente temporada!\n");
    }
    else if (qtdGols >= 5) {
        printf("Boa temporada!\n");
    }
    else {
        printf("Temporada abaixo do esperado.\n");
    }

    return 0;
}