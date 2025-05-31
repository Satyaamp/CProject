#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
};

void addBook(FILE *fp) {
    struct Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    printf("Enter Title: ");
    scanf(" %[^\n]", b.title);
    printf("Enter Author: ");
    scanf(" %[^\n]", b.author);
    fwrite(&b, sizeof(b), 1, fp);
    printf("Book added successfully!\n");
}

void listBooks(FILE *fp) {
    struct Book b;
    rewind(fp);
    printf("\n--- Book List ---\n");
    while (fread(&b, sizeof(b), 1, fp)) {
        printf("ID: %d | Title: %s | Author: %s\n", b.id, b.title, b.author);
    }
}

void searchBook(FILE *fp) {
    char title[100];
    int found = 0;
    struct Book b;
    printf("Enter title to search: ");
    scanf(" %[^\n]", title);
    rewind(fp);
    while (fread(&b, sizeof(b), 1, fp)) {
        if (strcmp(b.title, title) == 0) {
            printf("Found: %s by %s\n", b.title, b.author);
            found = 1;
            break;
        }
    }
    if (!found) printf("Book not found.\n");
}

int main() {
    FILE *fp = fopen("library.dat", "ab+");
    int choice;
    if (!fp) {
        printf("File error.\n");
        return 1;
    }

    do {
        printf("\n1. Add Book\n2. List Books\n3. Search Book\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addBook(fp); break;
            case 2: listBooks(fp); break;
            case 3: searchBook(fp); break;
            case 4: fclose(fp); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
