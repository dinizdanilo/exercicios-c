#include <stdio.h>

void menu() {
    printf("===============================\n");
    printf("=== Avaliação de Desempenho ===\n");
    printf("===============================\n");
}

float calcularMedia(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3;

    return media;
}

char* classificar(float media) {
    if (media >= 9) {
        return "Excelente\n";
    } else if (media >= 7) {
        return "Bom\n";
    } else if (media >= 5) {
        return "Regular\n";
    } else {
        return "Ruim\n";
    }
}

int main() {
    menu();

    for (int i = 1; i <= 5; i++) {
        float nota1, nota2, nota3;
        printf("\nDigite a primeira nota do aluno %d: ", i);
        scanf("%f%*c", &nota1);

        printf("Digite a segunda nota do aluno %d: ", i);
        scanf("%f%*c", &nota2);

        printf("Digite a terceira nota do aluno %d: ", i);
        scanf("%f%*c", &nota3);

        printf("O desempenho do aluno %d foi: %s", i, classificar(calcularMedia(nota1, nota2, nota3)));
    }

    return 0;
}