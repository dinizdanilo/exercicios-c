#include <stdio.h>

int main() {
    int moedas = 0;
    int moedasObtidas;
    int contador = 0;

    do {
        printf("Digite a quantidade de moedas obtidas (1 a 10): ");
        scanf("%d%*c", &moedasObtidas);

        if (moedasObtidas < 1 && moedasObtidas > 10) {
            continue;
        }

        moedas += moedasObtidas;
        contador++;

    } while (moedas != 100);

    printf("\nVocê obteve 100 moedas!\n");
    printf("A quantidade de rodadas necessárias foram: %d\n", contador);
}