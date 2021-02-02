#include <stdio.h>

int main(void) {
    float a, t = 0; 
    int c = 0, s = 6;

    while (s--) {
        scanf("%f", &a);
        if (a > 0) {
            c++;
            t += a;
        }
    }
    printf("%d valores positivos\n%.1f\n", c, t/c);
    return 0;
}
