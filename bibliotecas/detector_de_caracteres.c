#include <stdio.h>
#include <string.h>

void menu() {
    printf("==============================\n");
    printf("==== Caracteres Proibidos ====\n");
    printf("===== @ | # | $ | %% | ! ======\n");
    printf("==============================\n");
}

int calcularTamanhoNome(char *nome) {
    int tamanhoNome = strlen(nome);

    return tamanhoNome;
}

int calcularCaracteresProibidos(int tamanhoNome, char *nome) {
    int proibidos = 0;
    for (int i = 0; i < tamanhoNome; i++) {
        if (nome[i] == '@' || nome[i] == '#' ||
            nome[i] == '$' || nome[i] =='%' ||
            nome[i] == '!') {
                proibidos++;
        }
    } 
    
    return proibidos;
}

void validacaoNome(int proibidos) {
    if (proibidos > 0) {
        printf("Nome inválido! %d caractere(s) proibido(s).\n", proibidos);
    } else {
        printf("Nome válido! Nenhum caracter proibido.\n");
    }
}

int main() {
    menu();
    
    char nome[51];
    
    printf("\nDigite um nome: ");
    scanf("%50s", nome);

    int tamanho = calcularTamanhoNome(nome);

    int totalProibidos = calcularCaracteresProibidos(tamanho, nome);

    validacaoNome(totalProibidos);

    return 0;
}