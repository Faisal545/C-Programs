#include<stdio.h>
void main()
{
	int i,j,rows,columns;
	
	printf("Enter number of rows=");
	scanf("%i",&rows);
	printf("Enter number of columns=");
	scanf("%i",&columns);
	printf("\n");
	
	
	
	for(i=1;i<=rows;i++)
   {
			if(i%2==0)
		 {
			printf(" ");
		
		 }
	
		for(j=1;j<=columns;j++)
		{
		  	
		printf("*");	
				
		}
		
		printf("\n");
	}
	
	
	
}
