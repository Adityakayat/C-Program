#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr(;
    int n,i;
    n =1;
    while(n<100)
    {
        i =2;
        while(i<n)
        {
            if(n%i==0)
            {
                break;
            }
            i =i+1;
        }
        if(i==n)
        {
            printf("%d\n", n);
        }
        n = n+1;
    }
}