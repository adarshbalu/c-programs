#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[50],y[50];
	clrscr();
	printf("Enter first word : ");
	scanf("%s",x);
	printf("\nEnter second word : ");
	scanf("%s",y);
	if(strcmp(x,y)==0)
		printf("\nSame words");
	else
		printf("\nDiffrent words ");
	getch();
}
