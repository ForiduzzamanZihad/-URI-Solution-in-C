#include <stdio.h>

int main(void) {
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("MEDIA = %.5lf\n", (a * 3.5 + b * 7.5)/11.0);
    return 0;
}
