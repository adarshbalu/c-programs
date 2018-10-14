#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("Enter the character : ");
	scanf("%c",&a);
	if(a>64&&a<91)
		printf("\nIt is uppercase letter");
	else if(a>96&&a<123)
		printf("\nIt is lowercase letter");
	else
		printf("\nIt is not alphabet");
	getch();
}
