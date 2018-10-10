#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	printf("%d bytes is Size of char ",sizeof(char));
	printf("\n%d bytes is Size of int ",sizeof(int));
	printf("\n%d bytes is Size of short  ",sizeof(short));
	printf("\n%d bytes is Size of float  ",sizeof(float));
	printf("\n%d bytes is Size of double  ",sizeof(double));
	printf("\n%d bytes is Size of 1.5  ",sizeof(1.5));
	printf("\n%d bytes is Size of Hello ",sizeof("hello"));


	getch();
}