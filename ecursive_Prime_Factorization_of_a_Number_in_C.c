#include <stdio.h>

// Recursive function to print prime factors
void factorize(int n, int divisor) {
    if (divisor <= n) {
        if (n % divisor == 0) {
            printf("%d ", divisor);
            n = n / divisor;
        } else {
            divisor++;
        }
        factorize(n, divisor);  
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);5
    printf("Prime factors are: ");
    factorize(number, 2);  // Start with the smallest prime

    printf("\n");
    return 0;
}