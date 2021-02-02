#include <stdio.h>

int main(void) {
    int n, a, b, i, result;
    scanf("%d", &n);

    while (result = 0, n--) {
        scanf("%d%d", &a, &b);
        
        if (a > b) i = b, b = a, a = i;
        if (a % 2 == 0) a++;
        else a += 2;

        for (i = a; i < b; i += 2)
            result += i;

        printf("%d\n", result);
    }

    return 0;
}
