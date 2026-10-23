#include <stdio.h>

struct address {
    char street[50];
    char city[30];
    int zip;
};

struct student {
    char name[30];
    int rollno;
    struct address addr;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter student name: ");
        scanf(" %29[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter street: ");
        scanf(" %49[^\n]", s[i].addr.street);

        printf("Enter city: ");
        scanf(" %29[^\n]", s[i].addr.city);

        printf("Enter zip code: ");
        scanf("%d", &s[i].addr.zip);
    }

    printf("\n========== STUDENT DETAILS ==========\n");

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollno);
        printf("Street: %s\n", s[i].addr.street);
        printf("City: %s\n", s[i].addr.city);
        printf("Zip Code: %d\n", s[i].addr.zip);
    }

    return 0;
}



