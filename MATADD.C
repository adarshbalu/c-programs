#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],b[100][100],sum[100][100],i,j,m1,n1,m2,n2,m,n;
	clrscr();
	printf("\nAddition possible only for matrix of same order \n");
	printf("Enter the rows and columns of 1st matrix : ");
	scanf("%d%d",&m1,&n1);
	printf("\nEnter the rows and columns of 2nd matrix : ");
	scanf("%d%d",m2,n2);
		m=m1;
		n=n1;
		printf("\nEnter the first array : ");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);


		printf("\nEnter the second array :");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d",&b[i][j]);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				sum[i][j]=a[i][j]+b[i][j];
		printf("\nThe resultant matrix is : ");
		for(i=0;i<m;i++)
		{
			printf("\n");
			for(j=0;j<n;j++)
				printf("%d\t",sum[i][j]);
		}


	getch();
}