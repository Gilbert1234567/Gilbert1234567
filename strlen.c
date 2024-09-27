/*strlen */
/* Gilbert Kipkech*/
/* Date 27.09.2024*/
#include<stdio.h>
main()
{
	char fname[25];
	int x;
	printf("\nEnter the string:");
	scanf("%s", fname);
	x=strlen(fname);
	printf("The length of the string is: %s", x);
}
