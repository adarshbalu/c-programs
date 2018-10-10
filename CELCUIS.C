#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int c;
float f;
printf("Enter the celcius temp : ");
scanf("%d",&c);
f=((9/5)*c)+32;
printf("\nFarienhiet is : %d ",f);
getch();
}