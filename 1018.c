#include <stdio.h>

int main(void) {
    int i;
    scanf("%d", &i);
    printf("%d\n", i);
    
    printf("%d nota(s) de R$ 100,00\n", i/100);
    i %= 100;
    printf("%d nota(s) de R$ 50,00\n", i/50);
    i %= 50;
    printf("%d nota(s) de R$ 20,00\n", i/20);
    i %= 20;
    printf("%d nota(s) de R$ 10,00\n", i/10);
    i %= 10;
    printf("%d nota(s) de R$ 5,00\n", i/5);
    i %= 5;
    printf("%d nota(s) de R$ 2,00\n", i/2);
    i %= 2;
    printf("%d nota(s) de R$ 1,00\n", i);

    return 0;
}
