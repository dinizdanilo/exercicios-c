#include <stdio.h>

int main() {
    int tempoMinutos, tempoHoras, minRestantes;

    printf("\nDigite quanto tempo de jogo você tem em minutos: ");
    scanf("%d%*c", &tempoMinutos);
    tempoHoras = tempoMinutos / 60;
    minRestantes = tempoMinutos % 60;

    if (tempoHoras > 1) {
        printf("Tempo de jogo: %d horas e %d minutos\n", tempoHoras, minRestantes);
    }
    else {
        printf("Tempo de jogo: %d hora e %d minutos\n", tempoHoras, minRestantes);
    }

    return 0;
}