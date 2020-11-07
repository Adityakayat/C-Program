#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr()
    int i,p,n,k;
    printf("Enter any number = ");
    scanf("%d", &n);
    p = 0;
    k = n;
    while(n>0)
    {
        i = n%10;
        p = p + i*i*i;
        n = n/10;
    }
    if(p==k)
    {
        printf("This number is armstrong");
    }
    else
    {
        printf("This number is not armstrong");
    }
    getch();
}