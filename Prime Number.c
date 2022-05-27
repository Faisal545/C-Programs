#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("Enter Number: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
		if(count==2)
		{
			printf("\n%i is Prime Number",n);
		}
		if(!(count==2))
		{
			printf("\n%i is Not a Prime Number",n);
		}
}
