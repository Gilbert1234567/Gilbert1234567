/*using structures and files  */
/* Gilbert Kipkech*/
/* Roll No. 33*/
/* Date 07.11.2024*/

#include <stdio.h>
	  	main() 
		
		  {
	  		struct emp{
    FILE *fptr;
    char name[25];
    int eid;
}x[5];
    x[0].fptr = fopen("Employee.DAT", "w");
        printf("Enter the Employee Details.\n");
	
	for(int i=0;i<=5;i++)
	{
    printf("employee ID: ");
    scanf("%d", &x[i].eid);

    printf("Enter Employee name: ");
    scanf("%s", x[i].name);

    fprintf(x[i].fptr,"%s %d\n",&x[i].eid, x[i].name);

    fclose(x[i].fptr); 
}
}
