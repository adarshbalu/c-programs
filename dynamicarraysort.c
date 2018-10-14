#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int *a,n,i,j,t;
clrscr();
printf("\nEnter the number of elements: ");
scanf("%d",&n);
a=(int *)malloc(n *sizeof(int));
printf("\nEnter the %d numbers to be sorted: ",n);
for(i=0;i<=n-1;i++)
{
scanf("%d", (a+i));
}
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
if(*(a+i)<*(a+j))
{
t=*(a+i);
*(a+i)=*(a+j);
*(a+j)=t;
}
}
}
printf("\nAfter sorting : ");
for(i=0;i<n;i++)
printf("\n%d",*(a+i));
getch();
}

