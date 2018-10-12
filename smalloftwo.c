#include<stdio.h>
#include<conio.h>
void main()
{       int m,n,min;
	clrscr();
	printf("Enter two numbers : ");
	scanf("%d%d",&m,&n);
	min=(m<n?m:n);
	printf("\nSmallest is %d : ",min);


	getch();
}
