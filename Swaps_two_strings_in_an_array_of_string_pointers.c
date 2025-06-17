#include <stdio.h>

 int main() {
    char *names[3] = {
       "akshay",
        "srinivas",
       "gopal"
    };
    char *temp;

    printf("Original: %s %s %s\n", names[0], names[1], names[2]);

    temp = names[0];
    names[0] = names[1];
    names[1] = temp;

    printf("New: %s %s %s\n", names[0], names[1], names[2]);

    return 0;
}