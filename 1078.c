#include <stdio.h>

int main(void) {
    int i, a;
    scanf("%d", &a);
    for (i = 1; i <= 10; i++) printf("%d x %d = %d\n", i, a, a * i);
    return 0;
}
