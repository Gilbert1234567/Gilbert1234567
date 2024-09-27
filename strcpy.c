/* strcpy */
/* Gilbert kipkech*/
/* date 27.09.2024*/
#include<stdio.h>
#include<string.h>
main()
{
	char fname[25],cname[25];
	printf("\nEnter first name:");
	scanf("%s",fname);
	strcpy(cname,fname);
	printf("\nCopy Name:%s",cname);
}
