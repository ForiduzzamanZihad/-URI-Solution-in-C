#include <stdio.h>
#include <string.h>

void strrev(char str[], int len) {
    int i, j;
    
    for (i = 0, j = len; j > i; i++, j--) {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
}

int main(void) {
    int s;
    char cript[1001];
    scanf("%d", &s);
    
    getchar();
    while (s--) {
        gets(cript);

        int i, len = strlen(cript);

        for (i = 0; i < len; i++)
            if (cript[i] >= 65 && cript[i] <= 90 || cript[i] >= 97 && cript[i] <= 122)
                cript[i] += 3;

        strrev(cript, len - 1);
        
        for (i = len/2; i < len; i++) cript[i] -= 1;

        printf("%s\n", cript);
    }
    return 0;
}
