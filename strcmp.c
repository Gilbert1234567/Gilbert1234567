/*strlen */
/* Gilbert Kipkech*/
/* Date 27.09.2024*/
#include<stdio.h>
#include<string.h>
main()
{
	char fname[25], sname[25];
	int x;
	printf("\nEnter first name:");
	scanf("%s",fname);
	printf("\nEnter second name:");
	scanf("%s",sname);
	x=strcmp(fname,sname);
	if(x==0)
		printf("\nstrings are same");
	else
		printf("\nstrings are not same");
}
