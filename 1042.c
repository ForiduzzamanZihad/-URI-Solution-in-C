#include <stdio.h>

int main(void) {
    int a, b, c, s1, s2, s3, tmp;
    scanf("%d%d%d",&a,&b,&c);

    s1 = a, s2 = b, s3 = c;
    if (s1 > s2) tmp = s1, s1 = s2, s2 = tmp;
    if (s2 > s3) tmp = s2, s2 = s3, s3 = tmp;
    if (s1 > s2) tmp = s1, s1 = s2, s2 = tmp;

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",s1, s2, s3, a, b, c);
    return 0;
}
