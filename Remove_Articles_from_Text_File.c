#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Helper to check if word is 'a', 'an', or 'the'
int isRemovable(char *word) {
    return strcmp(word, "a") == 0 || strcmp(word, "an") == 0 || strcmp(word, "the") == 0;
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("cleaned.txt", "w");
    char word[100];

    while (fscanf(input, "%s", word) != EOF) {
        // Convert word to lowercase for comparison
        for (int i = 0; word[i]; i++)
            word[i] = tolower(word[i]);

        if (!isRemovable(word)) {
            fprintf(output, "%s ", word);
        } else {
            fprintf(output, " ");  // Replace removed word with space
        }
    }

    fclose(input);
    fclose(output);
    printf("Cleaned file created.\n");
    return 0;
}