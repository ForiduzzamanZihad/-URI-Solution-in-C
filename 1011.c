#include <stdio.h>

int main(void) {
    int r;
    scanf("%d", &r);
    printf("VOLUME = %.3lf\n", 4 * (3.14159 * r * r * r)/3.0);
    return 0;
}
