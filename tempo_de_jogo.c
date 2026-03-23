#include <stdio.h>

int main() {
    int tempoMinutos, tempoHoras, minRestantes;

    printf("\nDigite quanto tempo de jogo você tem em minutos: ");
    scanf("%d%*c", &tempoMinutos);
    tempoHoras = tempoMinutos / 60;
    minRestantes = tempoMinutos % 60;

    printf("Tempo de jogo: %d horas e %d minutos\n", tempoHoras, minRestantes);

    return 0;
}