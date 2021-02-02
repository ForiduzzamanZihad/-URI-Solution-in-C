#include <stdio.h>

int main(void) {
    int a, b, i, c = 0;
    scanf("%d%d", &a, &b);
    if (a > b) i = b, b = a, a = i;
    if (a % 2 == 0) a += 1;
    else a += 2;

    for (i = a; i < b; i += 2) c += i;

    printf("%d\n", c);
    return 0;
}
