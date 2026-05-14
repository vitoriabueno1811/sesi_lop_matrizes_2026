#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[25], opt, aux;
    srand(time(NULL));
    for(int i = 0; i < 25; i++) vetor[i] = rand() % 101;

    printf("1. Crescente\n2. Decrescente\nEscolha: ");
    scanf("%d", &opt);

    for(int i = 0; i < 24; i++) {
        for(int j = i + 1; j < 25; j++) {
            if((opt == 1 && vetor[i] > vetor[j]) || (opt == 2 && vetor[i] < vetor[j])) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(int i = 0; i < 25; i++) printf("%d ", vetor[i]);
    return 0;
}