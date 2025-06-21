#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *source = fopen("input.txt", "r");
    FILE *target = fopen("output.txt", "w");
    char ch;

   if (!source || !target) {
        printf("Error opening files.\n");
        return 1;
    }

    // Read each character, convert to uppercase, write to new file
    while ((ch = fgetc(source)) != EOF) {
        fputc(toupper(ch), target);
    }

    fclose(source);
    fclose(target);
    printf("File copied and converted successfully.\n");
    return 0;
}