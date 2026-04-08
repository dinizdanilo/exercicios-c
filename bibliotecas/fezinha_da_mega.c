#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    for (int i = 0; i < 6; i++) {
        int numeroAleatorio = (rand() % 60) + 1;
    
        printf("%d ", numeroAleatorio);
    }
    printf("\n");
    return 0;
}