#include<stdio.h>
void main()
{ 
    int i ,j;
	
	for(i=1; i<=4; i++)
	{
		for(j=i;j<=i*5;j+=i)
		{
			printf(" %i \t",j);
		}
		printf("\n");
	}
	
	
	
}
