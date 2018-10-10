#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,s,c;
	printf("Enter the number : ");
	scanf("%d",&a);
	s=a*a;
	c=s*a;
	printf("\nSquare : ",s);
	printf("\nCube : ",c);
	getch();
}