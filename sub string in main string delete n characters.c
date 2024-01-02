#include <stdio.h>
#include <string.h>

// Function to insert a sub-string into a main string at a given position
void insertSubstring(char mainString[], char subString[], int position) {
    int mainLength = strlen(mainString);
    int subLength = strlen(subString);

    // Check if the position is valid
    if (position < 0 || position > mainLength) {
        printf("Invalid position for insertion.\n");
        return;
    }

    // Make space for the sub-string and shift the characters to the right
    for (int i = mainLength; i >= position; i--) {
        mainString[i + subLength] = mainString[i];
    }

    // Insert the sub-string at the specified position
    for (int i = 0; i < subLength; i++) {
        mainString[position + i] = subString[i];
    }
}

// Function to delete n characters from a given position in a string
void deleteCharacters(char str[], int position, int n) {
    int length = strlen(str);

    // Check if the position is valid
    if (position < 0 || position >= length) {
        printf("Invalid position for deletion.\n");
        return;
    }

    // Shift the characters to the left to delete n characters
    for (int i = position; i < length - n; i++) {
        str[i] = str[i + n];
    }

    // Null-terminate the string after deletion
    str[length - n] = '\0';
}

int main() {
    char mainString[100], subString[50];
    int position, n;

    // Input the main string from the user
    printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);
    mainString[strcspn(mainString, "\n")] = '\0';  // Remove newline character

    // Input the sub-string from the user
    printf("Enter the sub-string to insert: ");
    fgets(subString, sizeof(subString), stdin);
    subString[strcspn(subString, "\n")] = '\0';  // Remove newline character

    // Input the position for insertion from the user
    printf("Enter the position for insertion: ");
    scanf("%d", &position);

    // Call the function to insert the sub-string
    insertSubstring(mainString, subString, position);
    printf("After insertion: %s\n", mainString);

    // Input the position for deletion from the user
    printf("Enter the position for deletion: ");
    scanf("%d", &position);

    // Input the number of characters to delete from the user
    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);

    // Call the function to delete characters
    deleteCharacters(mainString, position, n);
    printf("After deletion: %s\n", mainString);

    return 0;
}
