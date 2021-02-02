#include <stdio.h>

int main(void) {
    int i, save, a, saveIndex;

    for (i = 1; i < 1000; i++) {
        scanf("%d", &a);
        if (a > save) {
            save = a;
            saveIndex = i;
        }
    }

    printf("%d\n%d\n", save, saveIndex);
    return 0;
}
