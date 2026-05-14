#include <stdio.h>

int main() {
    int v[10], ma, me, pMa = 0, pMe = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(i == 0) { ma = me = v[i]; }
        if(v[i] < ma) { ma = v[i]; pMa = i; }
        if(v[i] < me) { me = v[i]; pMe = i; }
    }
    printf("Maior: %d (Pos %d), Menor: %d (Pos %d)\n", ma, pMa, me, pMe);
    return 0;
}