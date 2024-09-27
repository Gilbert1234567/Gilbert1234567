/find largest of three numbers using function
//Gilbert Kipkech, 26-09-2024

#include <stdio.h>
findLargest(int num1, int num2, int num3);

int main() {
    int n1, n2, n3, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    largest = findLargest(n1, n2, n3);

    printf("The largest number is: %d\n", largest);

    return 0;
	}
	
findLargest(int num1, int num2, int num3) 
	{
    int max = num1; 

    if (num2 > max) 
	{
        max = num2; 
    }
    if (num3 > max) 
	{
        max = num3; 
    }

    return (max); 
	}
