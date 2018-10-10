#include<stdio.h>
#include<conio.h>
void main()
{       int y;
	clrscr();
	printf("Enter the year to check : ");
	scanf("%d",&y);
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
				printf("\nIt is leap year ");
			else
				printf("\nIt is not a year ");
		}
	}
	getch();
}
