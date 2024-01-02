#include <stdio.h>

int main() {
    FILE *file;
    char fileName[100];
    char ch;

    // Input the file name from the user
    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    // Open the file in read mode
    file = fopen(fileName, "r");

    // Check if the file exists and can be opened
    if (file == NULL) {
        printf("Unable to open the file. Make sure the file exists and is accessible.\n");
        return 1; // Exit with an error code
    }

    // Read and display the contents of the file
    printf("\nContents of the file \"%s\":\n", fileName);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
