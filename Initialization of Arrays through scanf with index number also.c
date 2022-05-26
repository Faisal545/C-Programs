#include<stdio.h>
main()
{
	int a[50] ,i;
	int num,index=0;
	
	printf("Elements Want to enter in the Array =");
	scanf("%i",&num);
	printf("Enter \"%i\" elements in Array = \n",num);
	
	for(i=0;i<num;i++)
	{
		
	    scanf("%i",&a[i]);
	}
	
	
	for(i=0;i<num;i++)
	{
		index=i;// optional replacement of index at below argument "i".
	printf("Output of Array Element = %i is at index number:%i \n",a[i],i);
	
	
	}
	

	
	
	
}
