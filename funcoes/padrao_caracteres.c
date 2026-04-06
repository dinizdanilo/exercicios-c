#include <stdio.h>

void menu() {
    printf("============================\n");
    printf("=== Gerador de Quadrados ===\n");
    printf("============================\n");
}

void quadrado(int n, char caracter) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", caracter);
        }
        printf("\n");
    }
}

int main() {
    menu();
    char caracter;
    printf("Digite qual caracter será usado no quadrado: ");
    scanf("%c", &caracter);
    
    int n;
    printf("\nDigite a quantidade de linhas e colunas do quadrado: ");
    scanf("%d%*c", &n);

    printf("%s", quadrado(n, caracter));

    return 0;
}