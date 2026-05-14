#include <stdio.h>

int main() {
    int v[10], aux;
    for(int i = 0; i < 10; i++) scanf("%d", &v[i]);

    // Ordenar (Crescente)
    for(int i = 0; i < 9; i++) {
        for(int j = i+1; j < 10; j++) {
            if(v[i] > v[j]) { // Troque para < para Decrescente (Questão 12)
                aux = v[i]; v[i] = v[j]; v[j] = aux;
            }
        }
    }
    for(int i = 0; i < 10; i++) printf("%d ", v[i]);
    return 0;
}