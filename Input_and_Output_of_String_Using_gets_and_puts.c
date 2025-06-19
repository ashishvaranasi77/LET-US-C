#include <stdio.h>

int main() {
    char a[] = "Hello";
    char *p = a;

    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }
    return 0;
}