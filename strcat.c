/*strlen */
/* Gilbert Kipkech*/
/* Date 27.09.2024*/

#include<stdio.h>
#include<string.h>
main()
{
	char fname[25],sname[25];
	printf("\nEnter first name:");
	scanf("%s",fname);
	printf("\nEnter second name:");
	scanf("%s",sname);
	strcat(fname,sname);
	printf("\nYour first name is:%s",fname);
}
