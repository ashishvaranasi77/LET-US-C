#include <stdio.h>

struct book {
    char name[10];
    float price;
    int pages;
};

void main() {
    struct book b[10];
    int i;

    for (i = 0; i <= 9; i++) {
        printf("Enter name, price and pages\n");
        scanf("%s %f %d", b[i].name, &b[i].price, &b[i].pages);
        while (getchar() != '\n'); // Clear newline from buffer
    }

    for (i = 0; i <= 9; i++) {
        printf("%s %.2f %d\n", b[i].name, b[i].price, b[i].pages);
    }
}