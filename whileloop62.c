#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,j,n;
    i = 1;
    j = 1;
    printf("Enter any number = ");
    scanf("%d", & n);
    while(i<=n)
    {
        j = j*i;
        i = i+1;
    }
    printf("Factorial value = %d", j);
    getch();
}