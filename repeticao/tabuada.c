#include <stdio.h>

int main() {
    int n;
    printf("Digite o numero que deseja ver a tabuada: ");
    scanf("%d%*c", &n);

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}