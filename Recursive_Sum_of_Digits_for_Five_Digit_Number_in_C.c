#include <stdio.h>

// Recursive function to calculate sum of digits
int sumDigits(int num) {
    int result;

    if (num != 0) {
        int lastDigit = num % 10;
        result = lastDigit + sumDigits(num / 10);
    } else {
        return 0;
    }

    return result;
}

int main() {
    int number, sum;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    sum = sumDigits(number);

    printf("Sum of digits is %d\n", sum);

    return 0;
}