#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    for (int i = 0; i < 6; i++) {
        srand(time(NULL));
        int numeroAleatorio = (rand() % 60) + 1;
    
        printf("%d ", numeroAleatorio);
    }
    printf("\n");
    return 0;
}