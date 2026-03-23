#include <stdio.h>

int main() {
    int vitorias, empates, derrotas, pontos;

    printf("\nDigite a quantidade de vitórias do seu time: ");
    scanf("%d%*c", &vitorias);

    printf("Digite a quantidade de empates do seu time: ");
    scanf("%d%*c", &empates);

    printf("Digite a quantidade de derrotas do seu time: ");
    scanf("%d%*c", &derrotas);
    
    pontos = (vitorias * 3) + empates;
    printf("Total de pontos do seu time = %d\n", pontos);

    return 0;
}