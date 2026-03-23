#include <stdio.h>

int main() {
    float salario1, salario2, diferenca;

    printf("\nDigite seu salário: ");
    scanf("%f%*c", &salario1);
    printf("Digite o salario que deseja comparar: ");
    scanf("%f%*c", &salario2);

    if (salario1 >= salario2) {
        diferenca = salario1 - salario2;
    }
    else {
        diferenca = salario2 - salario1;
    }

    printf("A diferença de salário de vocês é = R$%.2f\n", diferenca);

    return 0;
}