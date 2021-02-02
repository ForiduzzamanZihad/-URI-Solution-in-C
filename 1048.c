#include <stdio.h>

int main(void) {
    float a, n;
    scanf("%f", &a);
    
    if (a <= 400.0) {
        n = a * 1.15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n", n, n - a);
    } else if (a <= 800) {
        n = a * 1.12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n", n, n - a);
    } else if (a <= 1200) {
        n = a * 1.10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n", n, n - a);
    } else if (a <= 2000) {
        n = a * 1.07;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n", n, n - a);
    } else {
        n = a * 1.04;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n", n, n - a);
    }

    return 0;
}
