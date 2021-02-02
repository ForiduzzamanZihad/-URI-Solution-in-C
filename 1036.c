#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta;
    scanf("%lf%lf%lf", &a, &b, &c);
    c *= 4.0 * a, delta = (b * b) - c;

    if (delta < 0 || a <= 0) printf("Impossivel calcular\n");
    
    else {
        delta = sqrt(delta), a *= 2.0;
        printf("R1 = %.5lf\nR2 = %.5lf\n", (-b + delta)/a, (-b - delta)/a);
    }

    return 0;
}
