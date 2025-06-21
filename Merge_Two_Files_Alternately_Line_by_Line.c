#include <stdio.h>

int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    FILE *out = fopen("merged.txt", "w");
    char line[256];

  if (!f1 || !f2 || !out) {
      printf("Error opening one or more files.\n");
	  return 1;
    }

    // Read lines alternately from f1 and f2
    while (1) {
        if (fgets(line, sizeof(line), f1)) fputs(line, out);
        else break;
        if (fgets(line, sizeof(line), f2)) fputs(line, out);
        else break;
    }

    // Copy remaining lines if any
    while (fgets(line, sizeof(line), f1)) fputs(line, out);
    while (fgets(line, sizeof(line), f2)) fputs(line, out);

    fclose(f1);
    fclose(f2);
    fclose(out);
    printf("Files merged alternately.\n");
    return 0;
}