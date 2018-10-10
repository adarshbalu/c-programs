#include <stdio.h>
#include<conio.h>
float average(int a, int b)
{	float av;
	av=(a+b)/2;
    return av;
}
void main()
{
    int num1, num2;
    float avg;
    clrscr();
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    avg = average(num1, num2);


    printf("Average of %d and %d is: %f",num1,num2,avg);

    getch();
}