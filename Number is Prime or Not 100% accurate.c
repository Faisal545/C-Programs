#include<stdio.h>
void main()
{
    int i,n,d,c=0;
    printf("\n \t Enter Number=");
    scanf("%i",&n);
    
    	printf("\n");
    
	  for(i=2;i<n;i=i+1)
    {
    	d=n%i;         // or if(n%i==0) :- printf("Number is Not Prime");
	
		if(d==0)
    	{
    		printf(" Diviser:%i \n",i);
					c=1;
		}

	}
	
	if (c==1)
				printf("\n \t\t\"Not a Prime Number\"");
	if (c==0)
				printf("\n \t\t\"Prime Number\"");

}
	
