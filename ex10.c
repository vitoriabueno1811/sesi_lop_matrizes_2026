#include <stdio.h>

int main() {
    char nomes[5][50];
    for(int i = 0; i < 5; i++) {
        printf("Nome %d: ", i+1);
        scanf("%s", nomes[i]);
    }
    for(int i = 0; i < 5; i++) printf("%s\n", nomes[i]);
    return 0;
}