/*assignment2. Student Result Calculation  */
/* Gilbert Kipkech*/
/* Roll No. 33*/
/* Date 05.11.2024*/


#include <stdio.h>

struct Student {
    int rno;
    char name[25];
    float marks[3];
};

int main() {
    struct Student x;
    float total = 0, average;

    printf("Enter roll number: ");
    scanf("%d", &x.rno);
    printf("Enter name: ");
    scanf("%s", x.name);

    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &x.marks[i]);
        total += x.marks[i];
    }

    average = total / 3;

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", x.rno);
    printf("Name: %s\n", x.name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
