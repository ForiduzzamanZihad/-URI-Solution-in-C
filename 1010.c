#include <stdio.h>

int main(void) {
    float b, c = 0;
    int a;
    scanf("%*d%d%f", &a, &b);
    c += a * b;
    scanf("%*d%d%f", &a, &b);
    printf("VALOR A PAGAR: R$ %.2f\n", c + a * b);
    return 0;
}
