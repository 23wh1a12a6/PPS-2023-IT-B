#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 12) {
        printf("Usage: %s <file_name> <value1> <value2> ... <value10>\n", argv[0]);
        return 1; // Exit with an error code
    }

    FILE *file;
    char fileName[100];
    int values[10];
    int index, newValue;

    // Copy the file name and values from command line arguments
    strcpy(fileName, argv[1]);
    for (int i = 0; i < 10; ++i) {
        values[i] = atoi(argv[i + 2]);
    }

    // Open the file in binary write mode
    file = fopen(fileName, "wb");

    // Check if the file can be created or opened
    if (file == NULL) {
        printf("Unable to create/open the file. Check if the path is valid.\n");
        return 1; // Exit with an error code
    }

    // Write the array of 10 integers to the file
    fwrite(values, sizeof(int), 10, file);

    // Close the file
    fclose(file);

    // Open the file again in binary read-write mode
    file = fopen(fileName, "r+b");

    // Check if the file can be opened
    if (file == NULL) {
        printf("Unable to open the file for reading and writing.\n");
        return 1; // Exit with an error code
    }

    // Ask the user for an index and a new value
    printf("Enter an index (0-9) to change the value: ");
    scanf("%d", &index);

    if (index < 0 || index >= 10) {
        printf("Invalid index. Index should be between 0 and 9.\n");
        fclose(file); // Close the file before exiting
        return 1; // Exit with an error code
    }

    printf("Enter a new value: ");
    scanf("%d", &newValue);

    // Move the file pointer to the specified index
    fseek(file, index * sizeof(int), SEEK_SET);

    // Write the new value at the specified index
    fwrite(&newValue, sizeof(int), 1, file);

    // Close the file
    fclose(file);

    // Open the file again in binary read mode
    file = fopen(fileName, "rb");

    // Check if the file can be opened
    if (file == NULL) {
        printf("Unable to open the file for reading.\n");
        return 1; // Exit with an error code
    }

    // Read and print all 10 values from the file
    printf("Values in the file after modification:\n");
    fread(values, sizeof(int), 10, file);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", values[i]);
    }
    printf("\n");

    // Close the file
    fclose(file);

    return 0;
}
