#include<stdio.h>
int main()
{
	
	int i,marks[5];
	int sum=0,average=0;

	printf("\n");
		for(i=0;i<5;i++)
	{
		printf("Enter the Marks of the %i Student:",i+1);
		scanf("%d",& marks[i]);
	
		sum=sum+marks[i];
		average=sum/5;
	}
	
		printf("\n \nTotal Sum = %d \n",sum);
	
	printf("Total Average = %d% \n",average);

// average = sum of total quantities / no of quantities.  e.g: sum of 5 students =150 , so avg = 150/5.	
}
