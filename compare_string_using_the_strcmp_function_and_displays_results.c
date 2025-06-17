#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Jerry";
    char string2[] = "Ferry";
    int i, j, k;

    i = strcmp(string1, "Jerry"); // i = 0 (strings match)
    j = strcmp(string1, string2);       
    k = strcmp(string2, "Jerry boy");    

    printf("%d %d %d\n", i, j, k);

    return 0;
}