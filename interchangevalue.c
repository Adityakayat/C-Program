#include<stdio.h>
#include<conio.h>
void main ()
{
    int a,b,c;
    printf ("write any two numbers = ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d\n%d", a,b);
    getch();
}