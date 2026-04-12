#include <stdio.h>

int main() {
    int numeros[10], pares[10];
    int qtdPares = 0;

    printf("Digite 10 números inteiros: \n\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%d Digite um número: ", i + 1);
        scanf("%d%*c", &numeros[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            pares[qtdPares] = numeros[i];
            qtdPares++;
        }
    }
    
    printf("\nOs numeros pares foram: \n\n");
    
    for (int i = 0; i < qtdPares; i++) {
            printf("%d ", pares[i]);
    }
    printf("\n");
    
    return 0;
}