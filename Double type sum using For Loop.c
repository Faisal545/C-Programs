#include<stdio.h>
void main()
{
	
	double i,sum;  // double is from real data type.
	sum=0;
	
	for(i=1.0;i<=1.4;i=i+0.1)
	{
			sum=sum+i;	  		 
	}
		printf("Sum of i=%lf",sum); // double format specifier= "Lf" or "lf". :-  f must written as small.
		    printf("\n"); 
	
}
