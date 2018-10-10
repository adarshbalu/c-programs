#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,r,i,s=0;
	clrscr();
	printf("Enter the number to be reversed : ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	printf("\nThe reverse of %d is %d ",t,s);
	getch();
}