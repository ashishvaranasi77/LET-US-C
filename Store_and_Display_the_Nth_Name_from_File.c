#include <stdio.h>

int main() {
    FILE *file = fopen("names.txt", "w");
    char name[50];
    int n, i;

    // Input and store names
    printf("How many names? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", name);
        fprintf(file, "%s\n", name);
    }
    fclose(file);

    // Read and display nth name
    printf("Enter which name to display (n): ");
    scanf("%d", &n);

    file = fopen("names.txt", "r");
    i = 1;
    while (fgets(name, sizeof(name), file)) {
        if (i == n) {
            printf("The %dth name is: %s", n, name);
            break;
        }
        i++;
    }

    fclose(file);
    return 0;
}