#include <stdio.h>

int main() {
    static int count = 5;             // Static variable retains its value across function calls
    printf("count = %d\n", count--);  // Print current count, then decrement

    if (count != 0)
        main();   // Recursively call main while count is not zero

    return 0;
}
