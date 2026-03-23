#include <stdio.h>

int main() {
    int tempoMinutos, tempoHoras;

    printf("\nDigite quanto tempo de jogo você tem em minutos: ");
    scanf("%d%*c", &tempoMinutos);
    tempoHoras = tempoMinutos / 60;
    printf("Tempo de jogo em horas = %d\n", tempoHoras);

    return 0;
}