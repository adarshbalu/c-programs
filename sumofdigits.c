#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,i,s=0;
	clrscr();
	printf("Enter the number : ");
	scanf("%ld",&n);
	while(n>0)
	{
		i=n%10;
		s=s+i;
		n=n/10;
	}
	printf("\nThe sum of digits is : %ld",s);
	getch();
}
