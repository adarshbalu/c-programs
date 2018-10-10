#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,item,loc=-1;
	clrscr();
	printf("Enter the no of elements : ");
	scanf("%d",&n);
	printf("\nEnter array elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter the item to be searched : ");
	scanf("%d",&item);
	for(i=0;i<n-1;i++)
	{
		if(item==a[i])
		{
			loc=i;
			break;
		}
	}
	if(loc>=0)
		printf("\n%d is found in position %d",item,loc+1);
	else
		printf("\nItem not found ");
	getch();

}
