#include <stdio.h>

struct address {
    char phone[15];
    char city[25];
    int pin;
};

struct emp {
    char name[25];
    struct address a;
};

int main() {
    struct emp e = { "john", "234-046", "nagpur", 10 };

    printf("\nName = %s Phone = %s City = %s Pin = %d\n",
           e.name, e.a.phone, e.a.city, e.a.pin);

    return 0;
}