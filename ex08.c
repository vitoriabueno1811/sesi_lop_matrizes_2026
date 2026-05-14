#include <stdio.h>

int main() {
    int v[5];
    for(int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("Inverso: ");
    for(int i = 4; i >= 0; i--) printf("%d ", v[i]);
    return 0;
}