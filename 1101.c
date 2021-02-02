#include <stdio.h>

int main(void) {
    int a, b, i;
    while(scanf("%d%d", &a, &b), a > 0 && b > 0) {
        int r = 0;
        if (a < b) i = b, b = a, a = i;
        for (i = b; i <= a; i++) {
            printf("%d ", i);
            r += i;
        }
        printf("Sum=%d\n", r);
    }

    return 0;
}
