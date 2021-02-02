#include <stdio.h>

int main(void) {
    int h1, m1, h2, m2, totalH, totalM;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);

    if (h2 < h1) {
        totalH = 24 - h1 + h2;
    } else {
        totalH = h2 - h1;
    }

    if (m2 < m1) {
        totalM = 60 - (m1 - m2);
        totalH--;
    } else {
        totalM = m2 - m1;
    }

    if (totalH == 24 && totalM > 0) totalH = 0;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalH, totalM);
    return 0;
}
