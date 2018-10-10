#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a[5];
  printf("enter the array elements");
  for(i=0;i<5;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("the array is");
  for(i=0;i<5;i++)
  {
   printf("%d",a[i]);
  }
  getch();
  }