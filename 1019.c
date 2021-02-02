#include <stdio.h>

int main(void) {
    int a, m;
    scanf("%d", &a);
    m = a % 3600;
    
    printf("%d:%d:%d\n", a/3600, m/60, m % 60);
    return 0;
}
