#include<stdio.h>
#include<conio.h>
void main()
{
	struct emp
	{
		char name[20];
		int bp,hra,da,ta;
	}e[20];
	int i,n;
	clrscr();
	printf("Enter the no of employees : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name : ");
		scanf("%s",e[i].name);
		printf("\nEnter : \nBasic pay , DA , HRA and TA : ");
		scanf("%d%d%d%d",&e[i].bp,&e[i].hra,&e[i].da,&e[i].ta);

	}
	printf("\nThe details are : ");
	for(i=0;i<n;i++)
	{
		printf("\nName : %s ",e[i].name);
		printf("\nBasic pay : %d\nDA : %d",e[i].bp,e[i].da);
		printf("\nHRA : %d \nTA : %d",e[i].hra,e[i].ta);
	}
	getch();

}
