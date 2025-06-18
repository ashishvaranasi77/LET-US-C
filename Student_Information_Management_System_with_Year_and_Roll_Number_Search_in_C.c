#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 450
// A basic student record — not handling edge cases like long names 
struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};
// Prints names of all students from a specific year
void listStudentsFromYear(struct Student students[], int size, int joinYear) {
    printf("Students who joined in %d:\n", joinYear);
    
    int foundAny = 0;  // Flag to check if we found any students

    for (int i = 0; i < size; i++) {
        if (students[i].yearOfJoining == joinYear) {
            printf(" - %s\n", students[i].name);
            foundAny = 1;
        }
    }
    if (!foundAny) {
        printf("No students found from that year.\n"); 
    }
}
// Searches for a student by roll number and displays their information
void fetchStudentDetails(struct Student list[], int totalCount, int targetRoll) {
    for (int i = 0; i < totalCount; ++i) {
        if (list[i].rollNumber == targetRoll) {
            // Print in a readable layout
            printf("\nStudent Details:\n");
            printf("Roll No    : %d\n", list[i].rollNumber);
            printf("Name       : %s\n", list[i].name);
            printf("Department : %s\n", list[i].department);
            printf("Course   : %s\n", list[i].course);
            printf("Joined Year: %d\n", list[i].yearOfJoining);
            return;
        }
    }
    printf("Oops, no student found with roll number %d.\n", targetRoll);
}