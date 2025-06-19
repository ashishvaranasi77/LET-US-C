#include <conio.h>

char p[] = "The sixth sick sheikh's sixth ship is sick";

int main() {
    int i = 0;
    while (p[i] != '\0') {
        putchar(p[i]);  // Print character at position i
        i++;
    }
    return 0;
}