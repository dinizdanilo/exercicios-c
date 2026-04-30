#include <stdio.h>
#include <string.h>

void header() {
    printf("================================\n");
    printf("=== Comparando Caracteres ======\n");
    printf("================================\n\n");
}

void lerNomes(int quantidadeNomes, char nomes[][50]) {
    for (int i = 0; i < quantidadeNomes; i++) {
        printf("Digite o nome %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }
}

char lerCaracterBusca() {
    char caracterBusca;
    printf("\n\nDigite qual caractere voce deseja buscar nas palavras: ");
    scanf(" %c", &caracterBusca);

    return caracterBusca;
}

void imprimirNomesFiltrados(int quantidadeNomes, char nomes[][50], char filtro) {
    printf("\nNomes que contem o caracter escolhido:\n");
    for (int i = 0; i < quantidadeNomes; i++) {
       if (strchr(nomes[i], filtro)) {
            printf("%s\n", nomes[i]);
       }
    }
}
 
int main() {
    header();

    #define QUANTIDADE 5
    char matrizNomes[QUANTIDADE][50];
    char letraAlvo;

    lerNomes(QUANTIDADE, matrizNomes);
    letraAlvo = lerCaracterBusca();
    imprimirNomesFiltrados(QUANTIDADE, matrizNomes, letraAlvo);

    return 0;
}