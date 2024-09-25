/* C program that calculates the factorial of an integer entered through the keyboard */
/*  Gilbert Kipkech */
/*  Date 25.09.2024 */
#include<stdio.h>
int fact (int);
int main()
   {
    int num;
    int factorial;
    printf("\nEnter a number:");
     scanf("%d", & num);
    factorial=fact(num);
    printf("factorial of %d=%|d\n", num , factorial);
    return 0;
    }
    int fact (int num)
    {
        int i
        int factorial = 1;
        for(i=1; i<=num; i++)
        factorial = factorial*i;
        return(factorial);
    }
