#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	if(a%2==0)
		{
		if(a!=0)
			printf("\It is even");
		else
			printf("\nIt is niether even nor odd");
		}
	else
		printf("\nIt is odd");
	getch();
}

