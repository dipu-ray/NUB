#include <stdio.h>

// Data save to example.txt file this c program.
int main() {
    FILE *fp;
    char data[100];

    // Writing to the file
    fp = fopen("example.txt", "a");  // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter a word to write to the file: ");
    fgets(data, sizeof(data), stdin);

    fputs(data, fp);  // Write to file
    fclose(fp);       // Close the file
    printf("Data written successfully to example.txt\n");

    // Reading from the file
    fp = fopen("example.txt", "r");  // Open file in read mode
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Reading from file:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s\n", data);
    }

    fclose(fp);  // Close the file

    return 0;
}