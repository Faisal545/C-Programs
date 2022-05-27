#include<stdio.h>
main ()
{
	int n,p;
	p=1;
	printf("Enter The Number (N)=");
	scanf("%i",&n);

   for(n;n>=1;n--)
  {
    p=p*n;  
  } 

printf("Factorial=%i",p);

}


