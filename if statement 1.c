#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter the Character=");
	scanf("%c",&ch);
	
	if (ch>=65 && ch<=90)
	{
		printf("%c is Upper Case Alphabet",ch);
	}
	
	if (ch>=97 && ch<=122)
	{
		printf("%c is Lower Case Alphabet",ch);
	}
	
	if (ch>=48 && ch<=57)
	{
		printf("%c is a Digit",ch);
	}
	
	if (ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127)
	{
		printf("%c is a Special Character",ch);
	}
	
	getch();
}
