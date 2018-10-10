#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,n1,n2,n3;
	clrscr();
	printf("Enter the limit :");
	scanf("%d",&n);
	n1=0;
	n2=1;
	printf("\n%d\t%d\t",n1,n2);
	for(i=0;i<n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\t",n3);
	}
	getch();

}
