#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[25], maior, pos = 0;
    srand(time(NULL));

    for(int i = 0; i < 25; i++) {
        vetor[i] = rand() % 101;
        printf("%d ", vetor[i]);
        if(i == 0 || vetor[i] > maior) {
            maior = vetor[i];
            pos = i;
        }
    }
    printf("\n\nMaior: %d na posicao: %d\n", maior, pos);
    return 0;
}