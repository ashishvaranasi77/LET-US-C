#include <stdio.h>

void func();

int main() {
    func(); // First call
    func(); // Second call
    return 0;
}

void func() {
    auto int i = 0;      // Reinitialized each time func() is called
    register int j = 0;  // Also reinitialized, stored in CPU register if possible
    static int k = 0;    // Retains its value between calls

    i++;
    j++;
    k++;

    printf("%d %d %d\n", i, j, k); // Outputs current values of i, j, and k
}
