#include <stdio.h>

int main() {
    int opcao;

    printf("=============================\n");
    printf("=========== MENU ============\n");
    printf("==== 1 | Hambúrguer =========\n");
    printf("==== 2 | Cachorro-quente ====\n");
    printf("==== 3 | Pizza ==============\n");
    printf("==== 4 | Sair ===============\n");
    printf("=============================\n");

    printf("\nDigite a opção que deseja: ");
    scanf("%d%*c", &opcao);

    switch (opcao){
        case 1:
            printf("\nVocê escolheu Hambúrguer.\n");
            break;
        case 2:
            printf("\nVocê escolheu Cachorro-quente.\n");
            break;
        case 3:
            printf("\nVocê escolheu Pizza.\n");
            break;
        case 4:
            printf("\nEncerrando pedido...\n");
            break;
        default:
            printf("\nOpção inválida!\n");
    }
}