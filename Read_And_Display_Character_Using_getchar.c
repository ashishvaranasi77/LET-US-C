#include <stdio.h>

int main()
{
    char ch;
    printf("Type any alphabet followed by enter key");
    ch = getchar();
    printf("You typed %c", ch);
    return 0;
}