#include <stdio.h>

int main(void) {
    int a, s = 5, c = 0;

    while (s--) {
        scanf("%d", &a);
        if (a % 2 == 0) c++;
    }

    printf("%d valores pares\n", c);
    return 0;
}
