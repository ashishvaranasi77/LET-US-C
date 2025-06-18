// Structure to hold details about each engine part
struct EnginePart {
    char serialNumber[10];   // Assuming serials are short
    int yearOfManufacture;
    char material[30];   
    int quantity;
};

// Function to list parts within a certain serial range
void displayPartsWithinRange(struct EnginePart parts[], int count) {
    // Just a note: Serial numbers assumed to be comparable as strings
    printf("Parts with serial numbers between BB1 and CC6:\n");

    for (int i = 0; i < count; i++) {
        // Thought about trimming white space assuming they're clean
        if (strcmp(parts[i].serialNumber, "BB1") >= 0 && strcmp(parts[i].serialNumber, "CC6") <= 0) {
            // Could break this into a helper printer, but maybe overkill for now
            printf("-> Serial: %s | Year: %d | Material: %s | Qty: %d\n",
                   parts[i].serialNumber,
                   parts[i].yearOfManufacture,
                   parts[i].material,
                   parts[i].quantity);
        }
    }
}