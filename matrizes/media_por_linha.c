#include <stdio.h>

void header () {
    printf("=================================\n");
    printf("=== MEDIA DE NOTAS DOS ALUNOS ===\n");
    printf("=================================\n\n");
}

void lerNotas(float notas[][4], int i) {
        for (int j = 0; j < 4; j++) {
            printf("Aluno %d, Prova %d: ", (i + 1), (j + 1));
            scanf("%f%*c", &notas[i][j]);
        }
}

void calcularMedias(float notas[][4], float medias[3], int i) {
        float soma = 0;
        for (int j = 0; j < 4; j++) {
            soma += notas[i][j];
        }
        medias[i] = (soma / 4.0);
}

void exibirResultados(float medias[3], int i) {
    printf("\nMédia do aluno %d: %.2f\n\n", (i + 1), (medias[i]));
}

int main() {
    header();

    
    float notas[3][4];
    float medias[3];
    int indiceAluno;
    
    for (indiceAluno = 0; indiceAluno < 3; indiceAluno++) {
        lerNotas(notas, indiceAluno);
        calcularMedias(notas, medias, indiceAluno);
        exibirResultados(medias, indiceAluno);
    }

    return 0;
}