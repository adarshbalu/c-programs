#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f=1,i;
	clrscr();
	printf("\nEnter the number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		f=f*i;
	printf("\nThe factorial : %d",f);
	getch();
}
