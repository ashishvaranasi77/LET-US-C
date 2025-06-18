#include <stdio.h>

int i = 0; // Global variable

void val();

int main() {
    printf("main's i = %d\n", i); // Prints initial value of global i (0)
    i++;                          // Increment global i to 1
    val();                        // Set i to 100 and increment it to 101
    printf("main's i = %d\n", i); // Should print 101
    val();                        // Again set i to 100, then increment to 101
    return 0;
}
void val() {
    i = 100;                      // Reset global i to 100
    printf("val's i = %d\n", i);  // Prints 100
    i++;                          // i becomes 101
}
