#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold student details
struct Student {
    char name[50];
    int age;
};
int compareByName(const void *a, const void *b) {
    return strcmp(((struct Student *)a)->name, ((struct Student *)b)->name);// Function to compare two students by name
}
int main() {
    struct Student students[100];
    int count = 0;
    FILE *file = fopen("students.txt", "r");

   // Read all student records from file
   while (fscanf(file, "%s %d", students[count].name,&students[count].age) != EOF) {
       count++;
	   }
    fclose(file);

    // Sort students by name
    qsort(students, count, sizeof(struct Student),compareByName);

    // Display sorted list
    printf("Sorted student list:\n");
    for (int i = 0; i < count; i++) {
        printf("%s - %d years old\n", students[i].name,students[i].age);
    }

    return 0;
}