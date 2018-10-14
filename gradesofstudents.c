#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	struct student
	{
	char name[20];
	int m1,tot;
	int m2,m3;
	float av;
	char grade[20];
	}s[10];

	int i,n;
	clrscr();
	printf("Enter the no of students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name : ");
		scanf("%s",s[i].name);
		printf("\nEnter three marks : ");
		scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
		s[i].tot=(s[i].m1)+(s[i].m2)+(s[i].m3);
		s[i].av=s[i].tot/3;
		if(s[i].av>=80 && s[i].av<101)
			strcpy(s[i].grade,"Distinction");
		else if(s[i].av>60)
			strcpy(s[i].grade,"First class");
		else if(s[i].grade>50)
			strcpy(s[i].grade,"Second class");
		else
			strcpy(s[i].grade,"\nFailed");

	}
	printf("\nStudent list : ");
	for(i=0;i<n;i++)
	{
		printf("\nName : Student%d : %s",i+1,s[i].name);
		printf("\nMarks : %d \t%d\t%d",s[i].m1,s[i].m2,s[i].m3);
		printf("\nTotal : %d \t Average : %f ",s[i].tot,s[i].av);
		printf("\nGrade : %s",s[i].grade);
	}
	getch();
}
