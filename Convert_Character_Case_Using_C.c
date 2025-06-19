#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    ch = getchar();  // Take a single character input from the user

    if (islower(ch))  // If it's a lowercase letter...
        putchar(toupper(ch));  // Convert to uppercase and print it
    else
        putchar(tolower(ch));  // Otherwise, convert to lowercase and print it

    return 0;
}