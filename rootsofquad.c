#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float d,r1,r2;
	clrscr();
	printf("Enter the values of a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	d=((b*b)-(4*a*c));
	if(d==0)
	{
		printf("\nThe roots are real and equal : ");
		r1=((-b)/(2*a));
		printf("\nThe root is : %f ",r1);
	}
	else if(d>0)
	{
		printf("\nThe roots are real and unequal : ");
		r1=(((-b)+d)/(2*a));
		r2=(((-b)-d)/(2*a));
		printf("\nThe roots are : %f\t%f",r1,r2);
	}
	else
		printf("\nThe roots are imaginary ");
	getch();


}
