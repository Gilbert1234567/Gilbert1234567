/*Assignment 1. Employee Record System  */
/* Gilbert Kipkech*/
/* Roll No. 33*/
/* Date 05.11.2024*/

#include <stdio.h>

struct Employee {
    int eid;
    char name[25];
    int age;
    float sal;
};

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee x[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("The Employee ID: ");
        scanf("%d", &x[i].eid);
        printf("The Employee Name: ");
        scanf(" %s", x[i].name);
        printf("The employee Age: ");
        scanf("%d", &x[i].age);
        printf("The employee Salary: ");
        scanf("%f", &x[i].sal);
    }

    printf("\nEmployee Details:\n");
    printf("Employee ID\tEmployee Name\t\tEmployee Age\tEmployee Salary\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-15s\t%d\t%.2f\n", x[i].eid, x[i].name, x[i].age, x[i].sal);
    }

    return 0;
}