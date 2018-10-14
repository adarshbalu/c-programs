#include<stdio.h>
#include<conio.h>
void main()
{
	int m;
	clrscr();
	printf("Enter the mark : ");
	scanf("%d",&m);
	if(m<101)
	{
		if(m>89)
			printf("\nGrade is A");
		else if(m>80&&m<=89)
			printf("\nGrade is B");
		else if(m>70&&m<79)
			printf("\nGrade is C");
		else if(m>60&&m<69)
			printf("\nGrade is D");
		else
			printf("\nGrade is E");
	}
	else
		printf("\nEnter valid mark");
	getch();
}
