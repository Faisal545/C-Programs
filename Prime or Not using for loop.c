#include<stdio.h>
main ()
{
	int i,n,p;
	printf("Enter number (N) to be checked= ");
	scanf("%i",&n);	
	
	for(i=2;i<n ;i++)
{
	if(n%i==0)
	p=0;
}
	if(p==0)
		
	{
		printf("\n\tNUMBER IS NOT PRIME \n");  
	
	}
	
	if(p==1)
	printf("\n\tNUMBER IS PRIME ");

	
}
