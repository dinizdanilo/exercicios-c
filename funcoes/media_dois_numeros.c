#include <stdio.h>

float media(float nota1, float nota2) {
    float media = (nota1 + nota2) / 2;

    return media;
}

int main() {
    printf("===========================\n");
    printf("=== Média de duas notas ===\n");
    printf("===========================\n");


    float nota1, nota2;
    printf("\nDigite a primeira nota: ");
    scanf("%f%*c", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f%*c" , &nota2);

    printf("A média das notas é = %.2f\n", media(nota1, nota2));

    return 0;
}