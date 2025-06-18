#include <stdio.h>

// Macro to check if a character is uppercase (A–Z)
#define ISUPPER(x) ( (x >= 65 && x <= 90) ? 1 : 0 )

// Macro to check if a character is lowercase (a–z)
#define ISLOWER(x) ( (x >= 97 && x <= 122) ? 1 : 0 )

// Macro to check if a character is any letter (A–Z or a–z)
#define ISALPHA(x) ( ISUPPER(x) || ISLOWER(x) )

// Macro to get the larger of two values
#define BIG(x, y) ( x > y ? x : y )

int main() {
    char ch;
    int a, b, d;

    printf("\nEnter any alphabet/character: ");
    scanf(" %c", &ch);

    if (ISUPPER(ch) == 1)
        printf("You entered a capital letter\n");

    if (ISLOWER(ch) == 1)
        printf("You entered a small case letter\n");

    if (ISALPHA(ch) != 1)
        printf("You entered character other than an alphabet\n");

    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);

    d = BIG(a, b);
    printf("Bigger number is %d\n", d);

    return 0;
}
