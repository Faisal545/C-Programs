#include<stdio.h>
void main()
{
    int i,p,d,c=0;
    printf("\nNumber:");
    scanf("%i",&p);
    printf("\n");
    for(i=2;i<p;i=i+1)
    {
    	d=p%i;
    	if(d==0)
    	{
    		printf("\tDiviser:%i\n",i);
			c=1;	
		}
    	    		
	}
	if (c==1)
		printf("\nNot a prime number");
	if (c==0)
		printf("\nPrime Number");
}
	
