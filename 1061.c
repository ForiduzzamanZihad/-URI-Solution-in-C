#include <stdio.h>

int main(void) {
    int d1, h1, m1, s1, d2, h2, m2, s2,
    totalD, totalH, totalM, totalS;

    scanf("%*4c%d", &d1);
    scanf("%d%*3c%d%*3c%d", &h1, &m1, &s1);
    scanf("%*4c%d", &d2);
    scanf("%d%*3c%d%*3c%d", &h2, &m2, &s2);

    totalD = d2 - d1;
    totalH = h2 - h1;
    totalM = m2 - m1;
    totalS = s2 - s1;

    if (totalS < 0) {
        totalM--;
        totalS += 60; 
    }

    if (totalM < 0) {
        totalH--;
        totalM += 60;
    }

    if (totalH < 0) {
        totalD--;
        totalH += 24;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", totalD, totalH, totalM, totalS);

    return 0;
}
