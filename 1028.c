#include <stdio.h>

int mdc(int n, int d) {
    if (d == 0) 
        return n;
    else
        return mdc(d, n % d);
}

int main(void) {
    int i, f1, f2;
    scanf("%d", &i);
    while (i--) {
        scanf("%d%d", &f1, &f2);
        printf("%d\n", mdc(f1, f2));
    }
    return 0;
}
