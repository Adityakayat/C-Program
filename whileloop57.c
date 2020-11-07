#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i, p, n;
    printf("Enter any number = ");
    scanf("%d",& n);
    p = 0;
    while(n>0)
    {
        i = n%10;
        p = p*10+i;
        n = n/10;
    }
    printf("reverse order is = %d", p);
    getch();        
}