#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5], menor, l = 0, c = 0;
    srand(time(NULL));

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 101;
            printf("%d\t", matriz[i][j]);
            if((i == 0 && j == 0) || matriz[i][j] < menor) {
                menor = matriz[i][j];
                l = i; c = j;
            }
        }
        printf("\n");
    }
    printf("\nMenor: %d na posicao [%d][%d]\n", menor, l, c);
    return 0;
}