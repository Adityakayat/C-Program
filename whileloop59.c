#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr(;
    int n,p,i;
    printf("Enter any number ");
    scanf("%d", &n);
    p = 0;
    while(n>0)
    {
        i = n%10;
        p = p+ i*i*i;
        n = n/10; 
    }
    printf("Sum of cube of digits = %d", p);
    getch();
}