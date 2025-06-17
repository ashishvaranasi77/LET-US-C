#include <stdio.h>

int strlength(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

int main() {
    char str[] = "Humpty Dumpty";
    int len = strlength(str);
    printf("Length of string = %d\n", len);
    return 0;
}