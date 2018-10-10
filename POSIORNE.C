#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter the  number : ");
	scanf("%d",&a);

	if(a>0)
		printf("\nThe number is positive" );
	else
		if(a==0)
			printf("\nThe number is neither positive nor negative");
		else
			printf("\nThe number is negative");
	getch();
}

