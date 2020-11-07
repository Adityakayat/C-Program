#include<stdio.h>
#include<conio.h>
void main ()
{
    // clrscr();
    int n;
    printf("Enter any year = ");
    scanf("%d", & n);
    if (n%4==0)
    {
        printf("The entered year is a leap year");
    }
     else 
    {
        printf("the entered year is not a leap year");
    }
    getch();
}