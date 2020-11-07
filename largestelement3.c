#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int a,b,c ;
    printf("Enter any 3 numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("a is the largest = %d", a);
    }
    if(b>=a && b>=c)
    {
        printf("b is the largest = %d", b);
    }
    if(c>=a && c>=b)
    {
        printf("c is the largest = %d", c);
    }
    getch();
}