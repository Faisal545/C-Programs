#include<stdio.h>
void main()
{
	
	int n,i;
	printf("Enter number =");
	scanf("%i",&n);
	
	for(i=2;i<n ;i++)
	{
		if(n%i==0)
		{
			printf("Number is not prime ");
	        break;
		}
	
	   if(!(n%i==0))
	
		{
			printf("Number is Prime");
			 break;
		}
		
		
	}
	
	
	/*Meanscomposite Number */
	//	else("Number is Prime.")
}
