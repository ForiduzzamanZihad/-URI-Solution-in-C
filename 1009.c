#include <stdio.h>

int main(void) {
    double a, b;
    scanf("%*s%lf%lf", &a, &b);
    printf("TOTAL = R$ %.2lf\n", a + b * 0.15);
    return 0;
}
