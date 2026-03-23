#include <stdio.h>

int main() {
    int opcao, presenca;
    float nota;

    printf("===================\n");
    printf("====== MENU =======\n");
    printf("== 1 | Verificar ==\n");
    printf("== 2 | Sair =======\n");
    printf("===================\n");

    printf("Selecione a opção: ");
    scanf("%d%*c", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a nota final do aluno: ");
            scanf("%f%*c", &nota);

            printf("Digite a porcentagem de presença do aluno (0 a 100): ");
            scanf("%d%*c", &presenca);

            if (nota >= 7 && presenca >= 75) {
                printf("\nAluno aprovado!\n");
            }
            else{
                printf("\nAluno reprovado.\n");
            }
            
            break;

        case 2:
            printf("Programa encerrado.\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
}