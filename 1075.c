#include <stdio.h>

int main(void) {
    int i = 0, a;
    scanf("%d", &a);

    while (i++ <= 10000)
        if (i % a == 2) printf("%d\n", i);

    return 0;
}
