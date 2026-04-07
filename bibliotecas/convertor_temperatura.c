#include <stdio.h>
#include <stdlib.h>

float convertor(char *temperatura) {

    return atof(temperatura);
}

int main() {
    char temperatura[6];
    printf("Digite a temperatura: ");
    scanf("%5s", temperatura);

    float temperaturaConvertida = convertor(temperatura);

    if (temperaturaConvertida < 18) {
        printf("O ambiente está frio.\n");
    } else if (temperaturaConvertida <= 26) {
        printf("O ambiente está agradável.\n");
    } else {
        printf("O ambiente está quente.\n");
    }

    return 0;
}