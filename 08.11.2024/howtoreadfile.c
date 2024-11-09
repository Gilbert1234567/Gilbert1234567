/*create a structure withy the following data elements; employee code, employee name,employee designation and salary; store the information in a employee.dat file for 10 employees*/
/* Gilbert Kipkech*/
/* Roll No. 33*/
/* Date 08.11.2024*/
#include<stdio.h>
#include<string.h>
	struct emp
	{
		int empcode;
		char name[20];
		char designation[20];
		float sal;
	};
	main()
	{
		struct emp x[10];
		int i;
		FILE *fptr;
		fptr = fopen("STD.DAT","W");
		
		for(i=0;i<=1;i++)
		{
		printf("enter employee code:\n");
		scanf("%d",&x[i].empcode);
		printf("enter employee name:\n");
		scanf("%s",x[i].name);
		printf("enter employee designation:\n");
		scanf("%s",x[i].designation);
		printf("enter employee salary:\n");
		scanf("%f",&x[i].sal);
		
		printf("========================================================");
		fprintf(fptr, "%d %s %s %.2f\n", &x[i].empcode, x[i].name, x[i].designation, &x[i].sal);
	}
	
	fclose(fptr);
		fptr = fopen("STD.DAT","r");
			for(i=0;i<=2;i++)
			{
				fscanf(fptr, "%d %s %s %f\n", &x[i].empcode, x[i].name, x[i].designation, &x[i].sal);
				printf("employee code:%d\n ", x[i].empcode);
				printf("employee name:%s\n ", x[i].name);
				printf("employee designation:%s\n ", x[i].designation);
				printf("employee salary:%d\n ", &x[i].sal);
				
				printf("========================================================");
			}
			fclose(fptr);
	}