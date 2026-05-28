#include <stdio.h>

void header(){
    printf("=================================================\n");
    printf("=== SOMA DE DOIS VALORES UTILIZANDO PONTEIROS ===\n");
    printf("=================================================\n\n");
}

void lerValores(int *valor1, int *valor2) {
    printf("Digite o primeiro valor: ");
    scanf("%d%*c", valor1);
    printf("Digite o segundo valor: ");
    scanf("%d%*c", valor2);
}

int somarValores(int *valor1, int *valor2) {
    return *valor1 + *valor2;
}

int main(void) {
    header();
    int valor1, valor2;

    lerValores(&valor1, &valor2);

    printf("\nA soma dos valores é = %d\n", somarValores(&valor1, &valor2));

    return 0;
}