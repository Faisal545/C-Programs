#include<stdio.h>
void main()
{
	
	int a,b,c,d,e,f,hchany,fchany,qhchany,qfchany,parathy,qparathy,roti,qroti;
	int aluwalaparatha,qaluwalaparatha,chai,qchai,Total;
	printf("\tHalf chany =30  ,, Full chany =50 "); 
	
	hchany=30;  // a
	fchany=50;  // b
	parathy=20;// c
	roti=10;  // d
	aluwalaparatha=40; // e
	chai=35; // f
	
	printf("\n\nEnter the quantity of Half Chany=");
	scanf("%i",&qhchany); 
	a=qhchany*hchany;
	printf("\nEnter the quantity of Full Chany=");
	scanf("%i",&qfchany);
	b=qfchany*fchany;
	printf("\n \t Per Paratha= 20 rupees \n");
	printf("\nEnter the quantity of Parathy= ");
	scanf("%i",&qparathy);
	c=qparathy*parathy;
	printf("\n \t Per Roti= 10 rupees \n");
	printf("\nEnter the quantity of Roti=");
	scanf("%i",&qroti);
	d=qroti*roti;
		printf("\n \t Per Alu wala Paratha= 40 rupees \n"); 
	printf("\nEnter the quantity of Alu wala Paratha=");
	scanf("%i",&qaluwalaparatha);
	e=qaluwalaparatha*aluwalaparatha;
		printf("\n \t Per Chai= 35 rupees \n");
	printf("\nEnter quantity of Chai=");
	scanf("%i",&qchai);
	f=qchai*chai;
	
	
	Total=a+b+c+d+e+f;
	printf("\n Your Total Amount (Bill) = %i ",Total);
	
	
}
