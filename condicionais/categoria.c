#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do jogador: ");
    scanf("%d%*c", &idade);

    if (idade <= 20) {
        printf("O jogador pode jogar na categoria Sub-20.\n");
    }
    else {
        printf("O jogador deve jogar na categoria Profissional.\n");
    }
    
    return 0;
}