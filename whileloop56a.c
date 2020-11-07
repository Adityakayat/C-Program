#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,n;
    printf("Enter any number = ");
    scanf("%d", &n);
    i =2;
    while(i<n)
    {
       if(n%i==0)
       {
           break;
       }
       i = i+1;
    }
    if (i==n)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is not a prime number");
    }
    getch();
}