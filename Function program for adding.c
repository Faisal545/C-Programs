//Q: Function program for adding two numbers.

#include<stdio.h>
int sumf(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}

int main()
{
	int a,b;
	int sumf(int,int);
	printf("Enter the value of a=");
	scanf("%i",&a);
	
	printf("Enter the value of b=");
	scanf("%i",&b);
	
	printf("sum=%i",sumf(a,b));
	
	return 0;
}
