#include <stdio.h>

int main(void) {
    int a, i;
    scanf("%d", &a);
    if (a % 2 == 0) a++;
    
    for (i = a; i < a + 12; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
