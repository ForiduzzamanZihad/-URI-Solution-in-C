#include <stdio.h>

int main(void) {
    float a, b, c, tmp;
    scanf("%f%f%f", &a, &b, &c);

    if (a < b) tmp = a, a = b, b = tmp;
    if (b < c) tmp = b, b = c, c = tmp;
    if (a < b) tmp = a, a = b, b = tmp;

    if (a >= b + c) printf("NAO FORMA TRIANGULO\n");
    
    else {
        a *= a, b *= b, c *= c;
        if (a == (b + c)) printf("TRIANGULO RETANGULO\n");
        if (a > (b + c)) printf("TRIANGULO OBTUSANGULO\n");
        if (a < (b + c)) printf("TRIANGULO ACUTANGULO\n");
        if (a == b && a == c) printf("TRIANGULO EQUILATERO\n");
        else if (a == b || b == c || c == a) printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
