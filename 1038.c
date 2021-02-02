#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);

    switch (a) {
        case 1:
            printf("Total: R$ %.2lf\n", 4.00 * b);
        break;

        case 2:
            printf("Total: R$ %.2lf\n", 4.50 * b);
        break;

        case 3: 
            printf("Total: R$ %.2lf\n", 5.00 * b);
        break;

        case 4:
            printf("Total: R$ %.2lf\n", 2.00 * b);
        break;

        case 5:  
            printf("Total: R$ %.2lf\n", 1.50 * b);
        break;
    }
    return 0;
}
