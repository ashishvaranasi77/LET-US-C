#include <stdio.h>
int main() {
    char *ptr = "Klinsman";
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}