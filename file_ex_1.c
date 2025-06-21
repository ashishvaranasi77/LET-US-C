#include <stdio.h>

int main() {
    FILE *fp;
    int ch;  // Use int to properly check for EOF

    fp = fopen("file1.cvs", "r");  // Corrected fopen usage
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {  // Read one character at a time
        putchar(ch);  // Print character
    }

    fclose(fp);  // Always close the file
    return 0;
}
