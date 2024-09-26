/* Write a C program to implement a simple calculator that performs addition, subtraction, multiplication, and division based on user input. Write the program using all the four variations of function. */
/* Gilbert Kipkech */
/* date 26.09.2024 */
#include <stdio.h>

void add_no_arg_no_return();
void sub_with_arg_no_return(double num1, double num2);
double mul_no_arg_with_return();
double div_with_arg_with_return(double num1, double num2);

int main() {
    int choice;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("1. Addition (No arguments, No return value)\n");
    printf("2. Subtraction (With arguments, No return value)\n");
    printf("3. Multiplication (No arguments, With return value)\n");
    printf("4. Division (With arguments, With return value)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            add_no_arg_no_return();
            break;
        case 2:
            printf("Enter two numbers for subtraction: ");
            scanf("%lf %lf", &num1, &num2);
            sub_with_arg_no_return(num1, num2);
            break;
        case 3:
            result = mul_no_arg_with_return();
            printf("Multiplication result: %.2lf\n", result);
            break;
        case 4:
            printf("Enter two numbers for division: ");
            scanf("%lf %lf", &num1, &num2);
            result = div_with_arg_with_return(num1, num2);
            if (result != -1) {
                printf("Division result: %.2lf\n", result);
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}

void add_no_arg_no_return() {
    double num1, num2, result;
    printf("Enter two numbers for addition: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 + num2;
    printf("Addition result: %.2lf\n", result);
}

void sub_with_arg_no_return(double num1, double num2) {
    double result = num1 - num2;
    printf("Subtraction result: %.2lf\n", result);
}

double mul_no_arg_with_return() {
    double num1, num2;
    printf("Enter two numbers for multiplication: ");
    scanf("%lf %lf", &num1, &num2);
    return num1 * num2;
}

double div_with_arg_with_return(double num1, double num2) {
    if (num2 == 0) {
        printf("Error! Division by zero.\n");
        return -1;
    }
    return num1 / num2;
}
