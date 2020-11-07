#include<stdio.h>
#include<conio.h>
void main()
{
    //clrscr();
    int n;
    printf("Enter any number = ");
    scanf("%d", & n);
    if (n%5==0 && n%7==0)
    {
        printf("The no. is divisible by both 5 & 7");
    }
    if (n%5!=0 && n%7==0)
    {
        printf("The no. is divisible by 7");
    }
    if (n%5==0 && n%7!=0)
    {
        printf("The no. is divisible by 5");
    }
    if (n%5!=0 && n%7!=0)
    {
        printf("The no. is not divisible by both 5 & 7");
    }
    getch();
}