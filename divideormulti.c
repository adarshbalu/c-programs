#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,p,q;
	printf("Enter two Numbers ");
	scanf("%d%d",&a,&b);
	p=a*b;
	q=a/b;
	printf("\nProduct is %d ",p);
	printf("\nQuotient is %d ",q);
	getch();
}
