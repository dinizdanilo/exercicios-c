 #include <stdio.h>

int main() {
    char nome[50];
    int idade, qtdGols;

    printf("Digite seu nome: ");
    scanf("%s%*c", nome);
    printf("Digite sua idade: ");
    scanf("%d%*c", &idade);
    printf("Quantos gols fez na carreira?: ");
    scanf("%d%*c", &qtdGols);

    return 0;
}