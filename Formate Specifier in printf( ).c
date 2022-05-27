#include<stdio.h>
void main()
{
	int a=20;
	//printf("%i",a);                                     //Value=20
	
	printf("\n0123456789");
	printf("\nThis is Right Align");
	printf("\n%10i",a);                                //Value=0123456789
	                                                     //             20     
	printf("\nThis is Left Align");
	printf("\n%-10i",a);                               //Value=01234567890
	                                                     //       20 
	printf("\nThis is Octal Number System");
	printf("\n%o",a);                                   //Value=01234567890
	                                                     //      24  
	
	printf("\n%#o",a);                                   //Value=01234567890
	                                                     //      024
	printf("\nThis is Hexadecimal Number System");

	printf("\n%#x",a);                                 //Value=01234567890
	                                                     //      0x14
}
