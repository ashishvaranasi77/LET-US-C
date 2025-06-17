#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[20], news[20];
    int pos, n, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter position and no. of characters to extract: ");
    scanf("%d%d", &pos, &n);

    if (pos < 0 || pos > strlen(str) - 1) {
        printf("Improper position value\n");
        exit(1);
    }
    if (n < 0) {
        printf("Improper value of n\n");
        exit(1);
    }

    i = 0;
    while (i < n) {
        news[i] = str[pos + i];
        i++;
    }
    news[i] = '\0';

    printf("The substring is: %s\n", news);
    return 0;
}