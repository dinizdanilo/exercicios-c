#include <stdio.h>

const char* classificacao(float nota) {
    if (nota < 4) {
        return "Reprovado!\n";
    } else if (nota >= 6) {
        return "Aprovado!\n";
    } else {
        return "Recuperação!\n";
    }
}

int main() {
    printf("========================\n");
    printf("=== Sistema de Notas ===\n");
    printf("========================\n");
    
    float notaAluno;
    printf("Digite a nota do aluno (ex: 6.5): ");
    scanf("%f%*c", &notaAluno);
    
    printf("A situação do aluno é: %s", classificacao(notaAluno));

    return 0;
}
