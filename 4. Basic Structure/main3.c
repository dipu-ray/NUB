#include <stdio.h>

// Write a program that uses typedef to define a shorthand for a Book structure, and then creates and prints book data.
typedef struct {
    int id;
    char title[100];
    float price;
} Book;

int main() {
    Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);  // allows input with spaces

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\n--- Book Information ---\n");
    printf("ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Price: %.2f\n", b.price);

    return 0;
}