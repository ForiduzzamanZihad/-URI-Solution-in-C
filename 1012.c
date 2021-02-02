#include <stdio.h>

int main(void) {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    printf("TRIANGULO: %.3lf\n", (a * c)/2);
    printf("CIRCULO: %.3lf\n", (3.14159 * c * c));
    printf("TRAPEZIO: %.3lf\n", (a + b) * c/2);
    printf("QUADRADO: %.3lf\n", b * b);
    printf("RETANGULO: %.3lf\n", a * b);
    return 0;
}
