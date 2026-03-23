#include <stdio.h>

int main() {
    int capacidadeEstadio, qtdTorcedores;

    printf("Digite a capacidade total do estadio: ");
    scanf("%d%*c", &capacidadeEstadio);
    printf("Digite quantos torcedores estão presentes: ");
    scanf("%d%*c", &qtdTorcedores);

    if (qtdTorcedores > (capacidadeEstadio * 0.9)) {
        printf("Lotado!\n");
    }
    else if (qtdTorcedores > (capacidadeEstadio * 0.7)) {
        printf("Ótima presença de público!\n");
    }
    else if (qtdTorcedores > (capacidadeEstadio * 0.5)) {
        printf("Público razoável.\n");
    }
    else {
        printf("Morumbis");
    }

    return 0;
}