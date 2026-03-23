#include <stdio.h>

int main() {
    int idade, qtdGols;

    printf("Digite a idade do jogador: ");
    scanf("%d%*c", &idade);
    printf("Digite a quantidade de gols do jogador: ");
    scanf("%d%*c", &qtdGols);

    if (idade <= 20 && qtdGols > 10) {
        printf("Jovem talento promissor!\n");
    }
    else if (idade <= 20 && qtdGols <= 10) {
        printf("Jovem em desenvolvimento.\n");
    }
    else if (idade > 20 && qtdGols > 15) {
        printf("Jogador experiente em grande fase!\n");
    }
    else {
        printf("Estevão\n");
    }

    return 0;
}