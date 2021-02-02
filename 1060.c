#include <stdio.h>

int main(void) {
    float a;
    int c = 0, s = 6;

    while (s--) {
        scanf("%f", &a);
        if (a > 0) c++;
    }

    printf("%d valores positivos\n", c);
    return 0;
}
