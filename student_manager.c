#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void addStudent(FILE *fp) {
    struct Student s;
    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    fwrite(&s, sizeof(s), 1, fp);
    printf("Student added successfully!\n");
}

void displayStudents(FILE *fp) {
    struct Student s;
    rewind(fp);
    printf("\n--- Student Records ---\n");
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
    }
}

void searchStudent(FILE *fp) {
    int roll;
    int found = 0;
    struct Student s;
    printf("Enter roll number to search: ");
    scanf("%d", &roll);
    rewind(fp);
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            printf("Found: %s, Marks: %.2f\n", s.name, s.marks);
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found.\n");
}

int main() {
    FILE *fp = fopen("students.dat", "ab+");
    int choice;
    if (!fp) {
        printf("File error.\n");
        return 1;
    }

    do {
        printf("\n1. Add Student\n2. Display All\n3. Search Student\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(fp); break;
            case 2: displayStudents(fp); break;
            case 3: searchStudent(fp); break;
            case 4: fclose(fp); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
