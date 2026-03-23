#include <stdio.h>

int main() {
    int cartaoAmarelo;

    printf("Digite a quantidade de cartões amarelos do jogador: ");
    scanf("%d%*c", &cartaoAmarelo);

    if (cartaoAmarelo >= 2) {
        printf("Jogador expulso.\n");
    }
    else {
        printf("Jogador se mantém em campo.\n");
    }

    return 0;
}