#include<stdio.h>
#include<conio.h>
void main ()
{
    // clrscr();
    int n;
    printf("Enter any number = ");
    scanf("%d", & n);
    if (n%2==0)
    {
        printf("The entered number is even");
    }
     else 
    {
        printf("the entered number is odd");
    }
    getch();
}