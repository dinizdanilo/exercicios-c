#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    
    int numeroAleatorio = (rand() % 100) + 1;
    int numeroDigitado;
    int contador = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d%*c", &numeroDigitado);

        if (numeroDigitado > numeroAleatorio) {
            printf("O numero aleatorio é menor.\n");
        }
        else if (numeroDigitado < numeroAleatorio) {
            printf("O numero aleatorio é maior.\n");
        }

        contador++;

    } while (numeroDigitado != numeroAleatorio);

    printf("Você acertou o numero aleatorio %d com %d tentativas!\n", numeroAleatorio, contador);

    return 0;
}