#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i;
  printf("enter array");
  for(i=0;i<9;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("the array is");
  if (a[i]%2==0)
    printf("\n%d\t",a[i]);

  getch();
  }