#include<stdio.h>
void main()
{
	
	int i,j,sum,count1=0,count2=0;
	
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("\t * ");
			count1=j;
		}
			printf("\n");
			
			count2=i;
	}
	sum=count1*count2;
	printf("\n Total Stars are:%i",sum);
			
}
