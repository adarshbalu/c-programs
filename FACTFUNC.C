#include<stdio.h>
#include<conio.h> 
long factorial(int);
 
void main()
{
  int n;
  long f;
  clrscr(); 
  printf("Enter a number :");
  scanf("%d", &n); 
 
  if (n < 0)
    printf("Negative integers are not allowed.\n");

  else
  {
    f = factorial(n);
    printf("\n%d! = %ld\n", n, f);
  }

  getch();
}

long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}