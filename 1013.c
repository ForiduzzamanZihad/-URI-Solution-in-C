#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int m = (a + b + abs(a - b))/2;
    
    printf("%d eh o maior\n", (m + c + abs(m - c))/2);
    return 0;
}
