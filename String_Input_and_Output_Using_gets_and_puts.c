#include <stdio.h>

char footballer[40];

int main()
{
    puts("Happy footballing");  // prints a fixed message
    gets(footballer);           // takes a string input (not safe!)
    puts(footballer);           // prints the entered name
    return 0;
}