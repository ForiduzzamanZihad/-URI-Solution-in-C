#include <stdio.h>

int main(void) {
    float a;
    scanf("%f", &a);
    if (a <= 2000.00) printf("Isento\n");
    else if (a <= 3000.00) printf("R$ %.2f\n", (a - 2000) * 0.08);
    else if (a <= 4500.00) printf("R$ %.2f\n", 80 + ((a - 3000) * 0.18));
    else printf("R$ %.2f\n", 350 + ((a - 4500) * 0.28));

    return 0;
}
