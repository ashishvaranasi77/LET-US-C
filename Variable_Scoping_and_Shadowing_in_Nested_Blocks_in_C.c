#include <stdio.h>

int x = 10; // Global variable

int main()
{
    int x = 20; // Shadows the global x
    {
        int x = 30; // Shadows the x from above block
        printf("%d\n", x); // Prints 30
    }
    printf("%d\n", x); // Prints 20
    return 0;
}