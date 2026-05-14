#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5], busca, achei = 0;
    srand(time(NULL));

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++) matriz[i][j] = rand() % 101;

    printf("Buscar numero: ");
    scanf("%d", &busca);

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(matriz[i][j] == busca) {
                printf("Encontrado em [%d][%d]\n", i, j);
                achei = 1;
            }
        }
    }
    if(!achei) printf("Nao encontrado.\n");
    return 0;
}