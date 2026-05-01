#include <stdio.h>

void header() {
    printf("=====================\n");
    printf("=== Score Counter ===\n");
    printf("=====================\n\n");
}

void receberECompararScores(int scores[5], int recordeAtual) {
    printf("Digite os 5 Scores do jogador: \n\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o score %d do jogador: ", i + 1);
        scanf("%d%*c", &scores[i]);
        if ((scores[i] > recordeAtual)) {
            printf("Parabens! Score %d superou o recorde!\n", scores[i]);
            recordeAtual = scores[i];
        } 
    }
}


int main() {
    header();
    
    int recordeAtual = 5000;
    int scores[5];

    receberECompararScores(scores, recordeAtual);

    return 0;
}