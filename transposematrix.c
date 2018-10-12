#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],t[100][100],m,n,i,j;
	clrscr();
	printf("Enter the rows and column of the matrix : ");
	scanf("%d%d",&m,&n);
	printf("Enter the matrix : ");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
       printf("\nThe matrix is : ");
       for(i=0;i<m;i++)
       {
		printf("\n");
		for(j=0;j<n;j++)
			printf("\t%d",a[i][j]);
       }

       printf("\nThe transpose is : ");
       for(i=0;i<m;i++)
       {
		printf("\n");
		for(j=0;j<n;j++)
			printf("\t%d",a[j][i]);
       }
       getch();
}
