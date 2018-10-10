#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,i,t,s=0;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(t==s)
		printf("\nThe number is angstong ");
	else
		printf("\nThe number is not angtrong");
	getch();
}