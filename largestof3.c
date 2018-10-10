#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter the 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("\n%d is largest ",a);
		else
			printf("\n%d is largest ",c);
	}
	else
	{
		if(b>c)
			printf("\n%d is largest ",b);
		else
			printf("\n%d is largest ",c);
	}
	getch();
}
