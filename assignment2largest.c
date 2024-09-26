//find largest of three numbers using function
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


findLargest(int a, int b, int c) 
{
    int max = a; 

    if (b > max) 
	{
        max = b; 
    }
    if (c > max) 
	{
        max = c; 
    }

    return (max); 
}

