#include <stdio.h>

int main(void) {
    int a, odd = 0, even = 0, pos = 0, neg = 0, i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &a);
        if (a % 2 == 0) even++;
        else odd++;

        if (a > 0) pos++;
        else if (a < 0) neg++;
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, pos, neg);
    return 0;
}
