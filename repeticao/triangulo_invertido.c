#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d%*c", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}