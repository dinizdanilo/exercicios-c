#include <stdio.h>
#include <stdlib.h>

int convertor(char *idade) {

    return atoi(idade);
}

int main() {
    char idade[4]; 
    printf("Digite sua idade: ");
    scanf("%3s", idade);

    if (convertor(idade) >= 18) {
        printf("Pessoa maior de idade.\n");
    } else {
        printf("Pessoa menor de idade.\n");
    }

    return 0;
}