#include<stdio.h>
void main()
{
	char g;
	int s,q,ys;
	printf("\n\tEnter gender as MALE (m) or FEMALE(f) \n ");
	printf("\n \n Enter Gender=");
	scanf("%c",&g);
	printf("Enter Year of Service=");
	scanf("%i",&ys);
	printf("\n QUAlification : 0=graduate , 1=post graduate \n");
	printf("Enter Your Qualification =");
	scanf("%i",&q);
	s=0;
	
	// For Male
	
	if(g=='m'&&ys>=10&&q==1)
	{
	s=s+40000;	
	
	}
	
	if(g=='m'&&ys>=0&&ys<=9&&q==1)
	{
	s=s+30000;	
	
	}
	
	if(g=='m'&&ys>=0&&ys<=9&&q==0)
	{
	s=s+10000;	
	
	}
	
	if(g=='m'&&ys>=10&&q==0)
	{
	s=s+20000;	
	
	}


// For Female 

	if(g=='f'&&ys>=10&&q==1)
	{
	s=s+40000;	
	
	}
	
	if(g=='f'&&ys>=0&&ys<=9&&q==1)
	{
	s=s+30000;	
	
	}
	
	if(g=='f'&&ys>=0&&ys<=9&&q==0)
	{
	s=s+10000;	
	
	}
	
	if(g=='f'&&ys>=10&&q==0)
	{
	s=s+20000;	
	
	}

	printf("SALLARY = %i",s);
	
	
	
	
}




