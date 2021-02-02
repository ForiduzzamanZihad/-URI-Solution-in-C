#include <stdio.h>

int main(void) {
    int i, temp;
    scanf("%d", &i);

    printf("%d ano(s)\n", i/365);
    i %= 365;
    printf("%d mes(es)\n", i/30);
    i %= 30;
    printf("%d dia(s)\n", i);
    return 0;
}
