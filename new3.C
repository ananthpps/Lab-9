#include <stdio.h>

struct students {
    char name[20];
    int rno;
    int m[3];
    int total = 0;
    int avg;
};

int main() {
    int n;

    printf("Enter how many students: ");
    scanf("%d", &n);

    struct students s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d:\n", i + 1);
        scanf(" %19[^\n]", s[i].name);

        printf("Enter roll number of student %d:\n", i + 1);
        scanf("%d", &s[i].rno);

        s[i].total = 0;

        for (int j = 0; j < 3; j++) {
            printf("Enter marks of subject %d for student %d:\n",
                   j + 1, i + 1);

            scanf("%d", &s[i].m[j]);
            s[i].total += s[i].m[j];
        }

        s[i].avg = s[i].total / 3;

        printf("\nThe result of student %d\nName: ", i + 1);
        puts(s[i].name);
        printf("Roll number: %d\n", s[i].rno);
        printf("Total: %d\n", s[i].total);
        printf("Average: %d\n", s[i].avg);
    }

    return 0;
}
