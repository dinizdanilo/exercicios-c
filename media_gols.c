#include <stdio.h>

int main() {
    int qtdPartidas, qtdGols;
    float mediaGols;

    printf("Digite sua quantidade de gols: ");
    scanf("%d%*c", &qtdGols);
    printf("Digite a quantidade de partidas jogadas: ");
    scanf("%d%*c", &qtdPartidas);
    mediaGols = qtdGols / qtdPartidas;
    printf("\nMedia de gols por partida = %.0f\n", mediaGols);

    return 0;
}