#include<stdio.h>
#include<conio.h>
void main()
{       int a,b,ch,z;
	clrscr();
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("\nMenu \n");
	printf("1.Addition \n2.Substraction\n3.Multiplication\n4.Division");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			z=a+b;
			printf("\nSum is %d ",z);
			break;
		case 2:
			z=a-b;
			printf("\nDiffrence is %d ",z);
			break;
		case 3:
			z=a*b;
			printf("\nProduct is %d ",z);
			break;
		case 4:
			z=a/b;
			printf("\nQuotient is %d ",z);
			break;
		default : printf("\nInvalid operation");
	}
	getch();
}
