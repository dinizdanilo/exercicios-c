#include <stdio.h>

int main() {
    int n, par = 2;
    printf("Digite um numero: ");
    scanf("%d%*c", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%-4d", par);
            par += 2;
        }
        printf("\n");
    }

    return 0;
}