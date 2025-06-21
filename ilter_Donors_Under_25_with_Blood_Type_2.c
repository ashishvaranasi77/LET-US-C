#include <stdio.h>

// Structure for donor data
struct Donor {
    char name[21];
    char address[41];
    int age;
    int bloodType;
};

int main() {
    struct Donor d;
    FILE *file = fopen("donors.txt", "r");

    printf("Donors under 25 with blood type 2:\n");

    // Read donor records and filter based on condition
    while (fscanf(file, "%20s %40s %d %d", d.name, d.address, &d.age, &d.bloodType) != EOF) {
        if (d.age < 25 && d.bloodType == 2) {
            printf("%s %s Age: %d Blood Type: %d\n", d.name, d.address, d.age, d.bloodType);
        }
    }

    fclose(file);
    return 0;
}