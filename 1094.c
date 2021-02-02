#include <stdio.h>

int main(void) {
    int s, a, total = 0, coelhos = 0, ratos = 0, sapos = 0;
    scanf("%d", &s);

    while (s--) {
        char c;
        scanf("%d%*c%c", &a, &c);
        total += a;
        if (c == 'C') coelhos += a;
        else if (c == 'R') ratos += a;
        else if (c == 'S') sapos += a;
    }
    float percent = 100.0/total;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %\n", percent * coelhos);
    printf("Percentual de ratos: %.2f %\n", percent * ratos);
    printf("Percentual de sapos: %.2f %\n", percent * sapos);

    return 0;
}
