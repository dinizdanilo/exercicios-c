#include <stdio.h>
#include <stdlib.h> 

void header() {
    printf("================================\n");
    printf("=== VETOR DINAMICO COM MEDIA ===\n");
    printf("================================\n\n");
}

void preencherVetor(float *vetor, int tamanho) {
    
    
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor do vetor na posicao %d: ", i);
        scanf("%f%*c", &vetor[i]);
    }
}

float calcularMedia(float *vetor, int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    
    return soma / tamanho;
}

int main(void) {
    header();
    float *vetor;
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d%*c", &tamanho);
    vetor = (float *) malloc(tamanho * sizeof(float));
    
    preencherVetor(vetor, tamanho);
    
    printf("A media dos valores que voce digitou foi = %.2f\n", calcularMedia(vetor, tamanho));
    
    free(vetor);
    
    return 0;
}