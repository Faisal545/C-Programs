#include<stdio.h>
void main()
{
	
	int i,j,rows,sp;
	//sp=space
	printf("Enter number of rows=");
	scanf("%i",&rows);
	 
	printf("\n");
	
	for(i=1;i<=rows;i++)
	{
		for(sp=1;sp<=(rows-i);sp++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
			
		{
			
			printf("*");
			
		}
			
		printf("\n");
	}
		
		
}
	
			

