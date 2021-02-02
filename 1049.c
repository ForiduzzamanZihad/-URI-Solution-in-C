#include <stdio.h>
#include <string.h>

int main(void) {
    char search[20];
    scanf("%s", search);

    if (!strcmp(search, "vertebrado")) {
        scanf("%s", search);
        if (!strcmp(search, "ave")) {
            scanf("%s", search);
            if (!strcmp (search, "carnivoro")) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            scanf("%s", search);
            if (!strcmp(search, "herbivoro")) {
                printf("vaca\n");
            } else {
                printf("homem\n");
            }
        }
    } else {
        scanf("%s", search);
        if (!strcmp(search, "inseto")) {
            scanf("%s", search);
            if (!strcmp(search, "hematofago")) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            scanf("%s", search);
            if (!strcmp(search, "hematofago")) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
