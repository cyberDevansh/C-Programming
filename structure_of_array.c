#include <stdio.h>
#include <conio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
  
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display data of each student
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n",
               students[i].name, students[i].roll_no, students[i].marks);
    }
    getch();
    return 0;
}
