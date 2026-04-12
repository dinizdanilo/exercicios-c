#include <stdio.h>

int main() {
    int fps[6];
    float soma = 0;

    printf("Digite os FPS registrados em 6 momentos: \n");
    printf("\n");
    
    for (int i = 0; i < 6; i++) {
        printf("Momento %d: ", i + 1);
        scanf("%d%*c", &fps[i]);
        soma += fps[i];
    }

    printf("\nMédia de FPS: %.2f\n", soma / 6);
}