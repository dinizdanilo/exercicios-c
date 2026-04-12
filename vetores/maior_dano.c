#include <stdio.h>

int main() {
    int dano[4];
    
    printf("Digite o dano de 4 ataques: \n");
    printf("\n");
    
    for (int i = 0; i < 4; i++) {
        printf("Ataque %d: ", i + 1);
        scanf("%d%*c", &dano[i]);
    }
    
    int maiorDano = dano[0];
    for (int i = 0; i < 4; i++) {
        if (dano[i] > maiorDano) {
            maiorDano = dano[i];
        }
    }

    printf("\nMaior dano causado: %d\n", maiorDano);

    return 0;
}