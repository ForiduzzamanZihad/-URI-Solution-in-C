#include <stdio.h>

int main(void) {
    int a, n;
    scanf("%d", &a);

    while (a--) {
        scanf("%d", &n);
        if (n == 0) printf("NULL\n");
        else if (n % 2 != 0) printf("ODD ");
        else printf("EVEN ");

        if (n < 0) printf("NEGATIVE\n");
        else if (n > 0) printf("POSITIVE\n");
    }

    return 0;
}
