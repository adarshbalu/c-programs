#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int p,n,r,i;
	printf("Enter the pricipal, no of years, rate of interest : ");
	scanf("%d%d%d",&p,&n,&r);
	i=(p*n*r)/100;
	printf("\nInterest is %d ",i);
	getch();
}
