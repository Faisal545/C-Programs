#include<stdio.h>
void main()
{
	
	int i,j,rows,columns,count;
	
	printf("Enter number of rows=");
	scanf("%i",&rows);
	
    printf("Enter number of columns=");
	scanf("%i",&columns); 
	printf("\n");
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=columns;j++)
			
		{
			
			printf("Hello World!!! \t");
			count=j*i;
		}
			
		printf("\n");
	}
		printf("\n \t\t Total count=%i",count);		
		
}
	
			

