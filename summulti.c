#include<stdio.h>
#include<conio.h>
void main()
{
    // clrscr();
    int a,b,sum,multiply;
    printf("Enter any two numbers");
    scanf("%d%d",&a,&b);
    sum= a+b;
    multiply= a*b;
    printf("Sum of Two Number = %d\n",sum);
    printf("multiply of two number = %d",multiply);
    getch();
}