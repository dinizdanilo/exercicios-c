#include <stdio.h>

int main() {
    int qtdCarros;
    char modelo[50];
    printf("Quantos carros serão registrados?: ");
    scanf("%d%*c", &qtdCarros);

    for (int i = 0; i < qtdCarros; i++) {
        printf("\nDigite o modelo do carro: ");
        scanf("%s", modelo);

        int anoFabricacao;
        printf("Digite o ano de fabricação do carro: ");
        scanf("%d%*c", &anoFabricacao);

        int funcionando;
        printf("Está funcionando normalmente? (1 | 0): ");
        scanf("%d%*c", &funcionando);

        if (anoFabricacao < 2005 && funcionando == 0) {
            printf("O carro %s precisa de REPAROS URGENTES!\n", modelo);
        } else if (anoFabricacao < 2005 && funcionando == 1) {
            printf("O carro %s é antigo, recomenda-se uma revisão!\n", modelo);
        } else if (anoFabricacao >= 2005 && funcionando == 0) {
            printf("O carro %s precisa de manutenção!\n", modelo);
        }
        else {
            printf("O carro %s está em boas condições!\n", modelo);
        }
    }
}