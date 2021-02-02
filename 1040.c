#include <stdio.h>

int main(void) {
    float n1, n2, n3, n4, m;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    
    m = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;

    printf("Media: %.1f\n", m);
    if (m >= 7) printf("Aluno aprovado.\n");

    else if (m >= 5) {
        float n5;
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        m = (m + n5)/2;

        if (m > 5) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n", m);
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
