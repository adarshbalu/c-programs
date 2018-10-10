#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,r,i,s=0;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	if(t==s)
		printf("\nThe number is palindrome ");
	else
		printf("\nThe number is not palindrome ");
	getch();
}