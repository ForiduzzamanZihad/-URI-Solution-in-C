#include <stdio.h>

int main(void) {
    int s;
    float a, b, c;
    scanf("%d", &s);
    while (s--) {
        scanf("%f%f%f", &a, &b, &c);
        printf("%.1lf\n", (a*2 + b*3 + c*5)/10.0);
    }
    return 0;
}
