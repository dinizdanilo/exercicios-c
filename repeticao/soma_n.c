#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d%*c", &n);

    int soma = 0;
    for (int i = 1; i <= n; i++) {
       soma += i;
       printf("%d\n", soma);
    }

    printf("A soma de 1 a %d e: %d\n", n, soma);
}