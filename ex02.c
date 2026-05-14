#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[25];
    srand(time(NULL));

    for(int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
        printf("%d ", vetor[i]);
    }
    return 0;
}