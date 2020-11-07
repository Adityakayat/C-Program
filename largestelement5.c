#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int a,b,c,d,e ;
    printf("Enter any 5 numbers = \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=b && a>=c && a>=d && a>=e)
    {
        printf("a is the largest = %d", a);
    }
    if(b>=a && b>=c && b>=d && b>=e)
    {
        printf("b is the largest = %d", b);
    }
    if(c>=a && c>=b && c>=d && c>=e)
    {
        printf("c is the largest = %d", c);
    }
    if(d>=a && d>=b && d>=c && d>=e)
    {
        printf("d is the largest = %d", d);
    }
    if(e>=a && e>=b && e>=c && e>=d)
    {
        printf("e is the largest = %d", e);
    }
    getch();
}