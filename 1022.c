#include <stdio.h>

int mdc(int n,int d) {
    if(d == 0) 
        return n < 0 ? n * -1 : n;
    else
        return mdc(d, n % d);
}

int main(void) {
    int a, n1, d1, n2, d2;
    char c;
    scanf("%d", &a);
    while (a--) {
        scanf("%d%*3c%d%*c%c%*c%d%*3c%d", &n1, &d1, &c, &n2, &d2);
        
        if (c == '*') {
            n1 *= n2;
            d1 *= d2;
        } else if (c == '+') {
            n1 = (n1 * d2 + n2 * d1);
            d1 = (d1 * d2);
        } else if (c == '-') {
            n1 = (n1 * d2 - n2 * d1);
            d1 = (d1 * d2);
        } else if (c == '/') {
            n1 = (n1 * d2);
            d1 = (n2 * d1);
        }

        printf("%d/%d = ", n1, d1);
        int m = mdc(n1, d1);
        printf("%d/%d\n", n1/m, d1/m);
    }
    return 0;
}
