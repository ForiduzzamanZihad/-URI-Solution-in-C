#include <stdio.h>

int main(void) {
    double i;
    int paper, coins;
    scanf("%lf", &i);
    
    paper = (int) i;
    coins = ((int) (i * 100)) % 100;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", paper/100);
    paper %= 100;

    printf("%d nota(s) de R$ 50.00\n", paper/50);
    paper %= 50;

    printf("%d nota(s) de R$ 20.00\n", paper/20);
    paper %= 20;

    printf("%d nota(s) de R$ 10.00\n", paper/10);
    paper %= 10;

    printf("%d nota(s) de R$ 5.00\n", paper/5);
    paper %= 5;

    printf("%d nota(s) de R$ 2.00\n", paper/2);
    paper %= 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", paper);

    printf("%d moeda(s) de R$ 0.50\n", coins/50);
    coins %= 50;

    printf("%d moeda(s) de R$ 0.25\n", coins/25);
    coins %= 25;

    printf("%d moeda(s) de R$ 0.10\n", coins/10);
    coins %= 10;

    printf("%d moeda(s) de R$ 0.05\n", coins/5);
    coins %= 5;

    printf("%d moeda(s) de R$ 0.01\n", coins);
    return 0;
}
