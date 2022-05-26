#include<stdio.h>
#include<conio.h>
void main()
{
	
	int i,rows,columns,j;
	printf("Enter Rows=");
	scanf("%i",&rows);
//	rows=getche();   making infinite lopp so ignore this method of input , try this in char type data.
  	printf("\n");
	columns=rows;
    
	for(i=1;i<=rows;i++)	
	{
		for(j=1;j<= /* rows or */ columns;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
