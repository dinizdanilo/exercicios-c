#include <stdio.h>

int maior(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3) {
        return num1;
    } else if (num2 > num1 && num2 > num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d%*c", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d%*c", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d%*c", &num3);

    printf("O maior numero que você digitou foi: %d\n", maior(num1, num2, num3));

    return 0;
}