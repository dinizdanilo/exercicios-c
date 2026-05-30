#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void header() {
    printf("=======================================\n");
    printf("=== INVERSAO DE STRING COM PONTEIROS===\n");
    printf("=======================================\n\n");
}

void lerFrase(char *frase, int tamanho) {
    printf("Digite a frase: ");
    fgets(frase, tamanho, stdin);
}

void inverterFrase(char *frase) {
    char *inicio = frase;
    char *fim = frase + strlen(frase) - 1;
 
    if (*fim == '\n') {
        fim--;
    }

    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        
        inicio++;
        fim--;
    }
}

int main(void) {
    header();
    int tamanho;
    char *frase;
    
    printf("Digite qual tamanho maximo da frase que voce quer escrever: ");
    scanf("%d%*c", &tamanho);
    
    frase = (char *) malloc((tamanho + 1) * sizeof(char));

    lerFrase(frase, tamanho + 1);

    printf("\nFrase original: %s", frase);

    inverterFrase(frase);

    printf("Frase invertida: %s\n", frase);

    free(frase);

    return 0;
}