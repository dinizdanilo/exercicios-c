#include <stdio.h>

int contador(char *string) {
    int contador = 0, i = 0;

    while (string[i] != '\0') {
        if (string[i] == 'a' || string[i] == 'A' ||
            string[i] == 'e' || string[i] == 'E' ||
            string[i] == 'i' || string[i] == 'I' ||
            string[i] == 'o' || string[i] == 'O' ||
            string[i] == 'u' || string[i] == 'U') {
                contador++;
            }
            i++;
    }

    return contador;
}

int main() {
    char string[50];
    printf("Digite uma frase: ");
    fgets(string, sizeof(string), stdin);

    printf("A quantidade de vogais nessa frase é: %d\n", contador(string));

    return 0;
}