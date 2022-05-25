#include<stdio.h>
main()
{
	int number,count,sum,a,b,c,sumb=0,Tnumber,Enumber;
	sum=0;
	printf(" Enter 3 digit number=");
	scanf("%i",&number);
	 
	Enumber=number;
	
	a=number%10;
	number=number/10;
	
	b=number%10;
	number=number/10;
	
	c=number%10;
	number=number/10;
	
	sumb=sumb+b;
	
	sum=sum+a+c; 
	Tnumber=number;
	
	if(sum<sumb)
	{
		printf(" Sum of First digit and Third digit :%i+%i= %i < %i (less than 2nd digit number) (True) ",c,a,sum,sumb);
	    printf("\n \"Yes\" first digit and third digit is < 2nd digit number :%i",sumb );
	
	}
	
	if(!(sum<sumb))
	
	{
		printf(" Sum of First digit and Third digit :%i+%i= %i < %i (not than 2nd digit number) (False) \n ",c,a,sum,sumb);
		printf(" \"No\" first digit and third digit is not less than 2nd digit number :%i",sumb); //,Enumber
	}
	
	
}

