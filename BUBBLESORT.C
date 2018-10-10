#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,i,j,t;
	clrscr();
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe unsorted array is : \n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
       printf("\nThe sorted array is :\n ");
       for(i=0;i<(n-1);i++)
       {
		for(j=0;j<(n-1);j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
       }
       printf("\n");
       for(i=0;i<n;i++)
		printf("%d\t",a[i]);
       getch();
}
