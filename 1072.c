#include <stdio.h>

int main(void) {
    int a, b, in = 0, out = 0;
    scanf("%d", &a);

    while (a--) {
        scanf("%d", &b);
        if (b >= 10 && b <= 20) in++;
        else out++;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
