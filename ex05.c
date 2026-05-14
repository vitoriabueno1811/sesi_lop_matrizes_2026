#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[25], busca, encontrado = -1;
    srand(time(NULL));

    for(int i = 0; i < 25; i++) vetor[i] = rand() % 101;

    printf("Informe um numero para buscar: ");
    scanf("%d", &busca);

    for(int i = 0; i < 25; i++) {
        if(vetor[i] == busca) {
            encontrado = i;
            break;
        }
    }

    if(encontrado != -1) printf("Encontrado na posicao %d\n", encontrado);
    else printf("Numero nao encontrado.\n");
    return 0;
}